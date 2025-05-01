# RealTimeVision

RealTimeVision is a C++ application that captures live video from a webcam and applies real-time image processing filters using OpenCV. Designed with modularity and performance in mind, it serves as an educational project to demonstrate object-oriented programming, multithreading, and GUI interaction in C++.

## 📸 Features

- Real-time video capture from webcam
- Grayscale filter implementation
- Modular class-based architecture (`VideoProcessor`)
- Ready for extension with additional filters and features

## 🛠️ Installation

### Prerequisites

- C++17 compatible compiler (e.g., `g++`, `clang++`)
- OpenCV 4.x installed and configured
- CMake 3.10 or higher

### Build Instructions

```bash
git clone https://github.com/maxwellchunghei/RealTimeVision.git
cd RealTimeVision
mkdir build && cd build
cmake ..
make
```

## Usage
```bash
./RealTimeVision
```

## Project Structure
```
RealTimeVision/
├── include/
│   └── VideoProcessor.hpp
├── src/
│   └── VideoProcessor.cpp
├── main.cpp
├── CMakeLists.txt
└── README.md
```

## 🤝 Contributing
Contributions are welcome! Please fork the repository and submit a pull request for any enhancements or bug fixes.

## 📄 License
This project is licensed under the MIT License. See the LICENSE file for details

### 📄 LICENSE
```
MIT License

Copyright (c) 2025 Maxwellchunghei

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.

```