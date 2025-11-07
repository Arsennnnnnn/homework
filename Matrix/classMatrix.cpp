#include <iostream>

#include "classMatrix.h"

matrix::matrix()
    : m_row(0), m_col(0), m_matrix(nullptr) {
        std::cout << __func__ << std::endl;
    }

matrix::matrix(const int row, const int col) : m_row(row), m_col(col) {
    m_matrix = new int*[row];
    for (int i = 0; i < row; ++i) {
        m_matrix[i] = new int[col]{};
    }
}

matrix::matrix(const matrix& other) : m_row(other.m_row), m_col(other.m_col) {
    m_matrix = new int*[m_row];
    for (int i = 0; i < m_row; ++i) {
        m_matrix[i] = new int[m_col];
        for (int j = 0; j < m_col; ++j) {
            m_matrix[i][j] = other.m_matrix[i][j];
        }
    }
}

void matrix::setRow(const int row) {
    m_row = row;
}

void matrix::getRow() const {
    std::cout << "Matrix row = " << m_row << std::endl;
}

void matrix::setCol(const int col) {
    m_col = col;
}

void matrix::getCol() const {
    std::cout << "Matrix col = " << m_col << std::endl;
}

void matrix::init() {
    for (int i = 0; i < m_row; ++i) {
        for (int j = 0; j < m_col; ++j) {
            m_matrix[i][j] = i * m_col + j + 1;
        }
    }
}

matrix::~matrix() {
    for (int i = 0; i < m_row; ++i) {
        delete[] m_matrix[i];
    }
    delete[] m_matrix;
    std::cout << __func__ << std::endl;
}

matrix& matrix::operator=(const matrix& other) {
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
matrix matrix::operator*(int a) {
    matrix result(m_row, m_col);
    for (int i = 0; i < m_row; ++i) {
        for (int j = 0; j < m_col; ++j) {
            result.m_matrix[i][j] = m_matrix[i][j] * a;
        }
    }
    return result;
}

matrix matrix::operator*(const matrix& other) {
    if (m_col != other.m_row) {
        std::cout << "Can't multiply those matrixes." << std::endl;
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

matrix& matrix::operator++() {
    for (int i = 0; i < m_row; ++i) {
        for (int j = 0; j < m_col; ++j) {
            ++m_matrix[i][j];
        }
    }
    return *this;
}

matrix matrix::operator++(int) {
    matrix temp(*this);
    for (int i = 0; i < m_row; ++i) {
        for (int j = 0; j < m_col; ++j) {
            m_matrix[i][j]++;
        }
    }
    return temp;
}
std::ostream& operator<<(std::ostream& os, const matrix& mat) {
    for (int i = 0; i < mat.m_row; ++i) {
        for (int j = 0; j < mat.m_col; ++j) {
            os << mat.m_matrix[i][j] << ' ';
        }
        os << '\n';
    }
    return os;
}
int* matrix::operator[](int index) {
    if (index < 0 || index >= m_row) {
        std::cout << "Seg fault." << std::endl;
        return nullptr;
    }
    return m_matrix[index];
}
