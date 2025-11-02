# KMeans-CPP

This repository implements the K-Means and K-Means++ clustering algorithms in C++ using Visual Studio 2022. The project leverages the Armadillo library for efficient linear algebra operations, such as matrix manipulations and distance calculations. The folder structure and build configuration are tailored for Visual Studio 2022, including solution (.sln) and project (.vcxproj) files.

## Features

- Standard K-Means algorithm for unsupervised clustering.
- K-Means++ initialization method for improved centroid selection and convergence.
- Utilizes Armadillo for high-performance matrix operations.
- Example code demonstrating usage on sample datasets.
- Configured for easy building and debugging in Visual Studio 2022.

## Prerequisites

- **Visual Studio 2022**: Required for building and running the project. Ensure you have the C++ desktop development workload installed.
- **Armadillo Library**: Make sure you have the armadillo library in your computer and change the properties of the project to include that folder.

## Folder Structure

The repository follows a standard Visual Studio 2022 project layout:

- **`KMeans-CPP.sln`**: The solution file to open in Visual Studio.
- **`KMeans-CPP/`**: The main project directory.
  - **`KMeans-CPP.vcxproj`**: The project file.
  - **`src/`**: Contains the C++ source files (`main.cpp`).
  - **`include/`**: Header files for the algorithms.(`kmeans.h`, `kMeansBase.h`)
  - **`data/`**: Sample dataset for testing (e.g., CSV files with point coordinates).
- **`README.md`**: This file.
- **`LICENSE`**: License information (e.g., MIT).

## Building the Project

1. Clone the repository:
   ```
   git clone https://github.com/yourusername/KMeans-CPP.git
   cd KMeans-CPP
   ```

2. Open the solution in Visual Studio 2022:
   - Double-click `kmeans-cpp.sln` or open it via File > Open > Project/Solution.

3. Configure the build:
   - Set the active configuration (Debug/Release) and platform (x64 recommended for Armadillo compatibility).
   - give the project tje path to your armadillo library.

4. Build the solution:
   - Press `Ctrl + Shift + B` or right-click the project in Solution Explorer and select Build.
   - The executable will be generated in the `build/Debug/` or `build/Release/` folder (e.g., `KMeans-CPP.exe`).

If you encounter linker errors related to Armadillo, ensure the library paths are correctly set in Project Properties.

## Usage

The project builds a console application that demonstrates the K-Means and K-Means++ algorithms on sample data and outputs the coordinates of the found centroids for the number of K-Groups.

### Running the Executable

1. After building, run the executable from the command line:
   ```
   .\build\Debug\KMeans-CPP.exe
   ```
   
The program will output cluster assignments, centroids, and basic metrics (e.g., inertia).

## Dependencies

- **Armadillo**: Version 15.0.3 (Medium Roast). For more details, visit [Armadillo's official site](http://arma.sourceforge.net/).
- No external dependencies beyond Visual Studio 2022.

## Contributing

Contributions are welcome! Feel free to open issues for bugs or feature requests. To contribute:
1. Fork the repository.
2. Create a feature branch (`git checkout -b feature/YourFeature`).
3. Commit your changes (`git commit -am 'Add YourFeature'`).
4. Push to the branch (`git push origin feature/YourFeature`).
5. Open a Pull Request.

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

## Acknowledgments

- Inspired by standard machine learning clustering techniques.
- Thanks to the Armadillo team for their excellent linear algebra library.
