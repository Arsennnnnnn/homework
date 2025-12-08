/*
#include <iostream>
#include <fstream>
#include "classMatrix.h"
template<typename T>
matrix<T>::matrix()
    : m_row(0), m_col(0), m_matrix(nullptr) {
}

template<typename T>
matrix<T>::matrix(int row, int col) : m_row(row), m_col(col) {
    m_matrix = new int*[row];
    for (int i = 0; i < row; ++i) {
        m_matrix[i] = new int[col]{};
    }
}
template<typename T>
matrix<T>::matrix(const matrix<T>& other) : m_row(other.m_row), m_col(other.m_col) {
    m_matrix = new int*[m_row];
    for (int i = 0; i < m_row; ++i) {
        m_matrix[i] = new int[m_col];
        for (int j = 0; j < m_col; ++j) {
            m_matrix[i][j] = other.m_matrix[i][j];
        }
    }
}
template<typename T>
matrix<T>::matrix(matrix<T> && other) noexcept
    : m_row(other.m_row), m_col(other.m_col), m_matrix(other.m_matrix) {
    other.m_row = 0;
    other.m_col = 0;
    other.m_matrix = nullptr;
}
template<typename T>
matrix<T> & matrix<T>::operator=(matrix<T> && other) noexcept {
    if (this != &other) {
        for (int i = 0; i < m_row; ++i) {
            delete[] m_matrix[i];
        }
        delete[] m_matrix;
        m_row = other.m_row;
        m_col = other.m_col;
        m_matrix = other.m_matrix;
        other.m_row = 0;
        other.m_col = 0;
        other.m_matrix = nullptr;
    }
    return *this;
}

template<typename T>
void matrix<T>::setRow(int row) {
    m_row = row;
}

template<typename T>
void matrix<T>::getRow() const {
    std::cout << "Matrix row = " << m_row << std::endl;
}

template<typename T>
void matrix<T>::setCol(int col) {
    m_col = col;
}

template<typename T>
void matrix<T>::getCol() const {
    std::cout << "Matrix col = " << m_col << std::endl;
}

template<typename T>
void matrix<T>::init() {
    for (int i = 0; i < m_row; ++i) {
        for (int j = 0; j < m_col; ++j) {
            m_matrix[i][j] = i * m_col + j + 1;
        }
    }
}

template<typename T>
matrix<T>::~matrix() {
    for (int i = 0; i < m_row; ++i) {
        delete[] m_matrix[i];
    }
    delete[] m_matrix;
}

template<typename T>
matrix<T>& matrix<T>::operator=(const matrix& other) {
    if (this != &other) {
        for (int i = 0; i < m_row; ++i) {
            delete[] m_matrix[i];
        }
        delete[] m_matrix;

        m_row = other.m_row;
        m_col = other.m_col;
        m_matrix = new int*[m_row];
        for (int i = 0; i < m_row; ++i) {
            m_matrix[i] = new int[m_col];
            for (int j = 0; j < m_col; ++j) {
                m_matrix[i][j] = other.m_matrix[i][j];
            }
        }
    }
    return *this;
}

template<typename T>
matrix<T> matrix<T>::operator*(int a) {
    matrix result(this -> m_row, this -> m_col);
    for (int i = 0; i < m_row; ++i) {
        for (int j = 0; j < m_col; ++j) {
            result.m_matrix[i][j] = m_matrix[i][j] * a;
        }
    }
    return result;
}

template<typename T>
matrix<T> matrix<T>::operator*(const matrix& other) {
    if (m_col != other.m_row) {
        std::cout << "Can't multiply those matrices." << std::endl;
        return matrix();
    }
    matrix result(m_row, other.m_col);
    for (int i = 0; i < m_row; ++i) {
        for (int j = 0; j < other.m_col; ++j) {
            result.m_matrix[i][j] = 0;
            for (int k = 0; k < m_col; ++k) {
                result.m_matrix[i][j] += m_matrix[i][k] * other.m_matrix[k][j];
            }
        }
    }
    return result;
}

template<typename T>
matrix<T>& matrix<T>::operator++() {
    for (int i = 0; i < m_row; ++i) {
        for (int j = 0; j < m_col; ++j) {
            ++m_matrix[i][j];
        }
    }
    return *this;
}

template <typename T>
matrix<T> matrix<T>::operator++(int) {
    matrix temp(*this);
    for (int i = 0; i < m_row; ++i) {
        for (int j = 0; j < m_col; ++j) {
            ++m_matrix[i][j];
        }
    }
    return temp;
}
/*
template <typename T>
std::ostream& operator<<(std::ostream& os, const matrix<T>& mat) {
     for (int i = 0; i < mat.m_row; ++i) {
         for (int j = 0; j < mat.m_col; ++j) {
             os << mat.m_matrix[i][j] << "  ";
         }
         os << '\n';
     }
    return os;
}


template <typename T>
T* matrix<T>::operator[](int index) {
    if (index < 0 || index >= m_row) {
        std::cout << "Seg fault." << std::endl;
        return nullptr;
    }
    return m_matrix[index];
}

bool matrix::readFromFile(const std::string& filename) {
        std::ifstream file(filename);
        if (!file) {
            std::cout << "Error: Could not open file " << filename << std::endl;
            return false;
        }
        int rows, cols;
        file >> rows >> cols;
        if (rows <= 0 || cols <= 0) {
            std::cout << "Error: Invalid dimensions" << std::endl;
            file.close();
            return false;
        }
        if (m_matrix != nullptr) {
            for (int i = 0; i < m_row; ++i) {
                delete[] m_matrix[i];
            }
            delete[] m_matrix;
        }
        m_row = rows;
        m_col = cols;
        m_matrix = new int*[m_row];
        for (int i = 0; i < m_row; ++i) {
            m_matrix[i] = new int[m_col];
        }
        for (int i = 0; i < m_row; ++i) {
            for (int j = 0; j < m_col; ++j) {
                if (!(file >> m_matrix[i][j])) {
                    std::cout << "Error: Not enough values in file" << std::endl;
                    file.close();
                    return false;
                }
            }
        }
        file.close();
        std::cout << "Matrix successfully read from " << filename << std::endl;
        return true;
    }

    void matrix::writeToFile(const std::string& filename) const {
        std::ofstream file(filename);
        if (!file) {
            std::cout << "Error: Could not create file " << filename << std::endl;
            return;
        }
        file << m_row << " " << m_col << std::endl;
        for (int i = 0; i < m_row; ++i) {
            for (int j = 0; j < m_col; ++j) {
                file << m_matrix[i][j] << " ";
            }
            file << std::endl;
        }
        file.close();
        std::cout << "Matrix successfully written to " << filename << std::endl;
    }
*/