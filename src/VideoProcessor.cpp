#include "VideoProcessor.hpp"

VideoProcessor::VideoProcessor() noexcept = default;

VideoProcessor::VideoProcessor(int cameraIndex) noexcept {
    openCamera(cameraIndex);
}

VideoProcessor::~VideoProcessor() noexcept {
    if (cap.isOpened()) {
        cap.release();
    }
}

bool VideoProcessor::openCamera(int index) {
    if (!cap.open(index)) {
        std::cerr << "[ERROR] Failed to open camera at index " << index << std::endl;
        return false;
    }
    return true;
}

bool VideoProcessor::isOpened() const noexcept {
    return cap.isOpened();
}

void VideoProcessor::processFrames() {
    if (!cap.isOpened()) {
        std::cerr << "Camera is not opened." << std::endl;
        return;
    }

    cv::Mat frame, processed;
    std::cout << "[INFO] Press ESC to exit." << std::endl;
    while (true) {
        cap >> frame;
        if (frame.empty()) {
            std::cerr << "[WARNING] Empty frame captured" << std::endl;
            break;
        }

        // Resize input for consistent processing performance
        cv::resize(frame, frame, cv::Size(640, 480));

        // Apply user-defined or default filter
        applyFilter(frame, processed);
        cv::imshow(windowOriginal, frame);
        cv::imshow(windowProcessed, processed);

        char key = static_cast<char>(cv::waitKey(10));
        if (key == 27 || key == 'q' || key == 'Q') { // ESC key OR Q ket
            break;
        }
    }
    cv::destroyAllWindows();
 }

 // Default grayscale filter
 void VideoProcessor::applyFilter(const cv::Mat& frame, cv::Mat& output) {
    // Default implementation: convert to grayscale
    cv::cvtColor(frame, output, cv::COLOR_BGR2GRAY);
 }