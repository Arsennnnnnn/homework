#ifndef CLASSMATRIX_H
#define CLASSMATRIX_H

class matrix {
public:
    matrix();
    matrix(const int, const int);
    ~matrix();
    matrix(const matrix&);
    matrix& operator=(const matrix&);
    matrix operator*(int);
    matrix operator*(const matrix&);
    matrix& operator++();
    matrix operator++(int);
    int *operator[](int index);
    void print();
    void setRow(const int row);
    void getRow() const;
    void setCol(const int col);
    void getCol() const;
    void init();
    friend std::ostream& operator<<(std::ostream& os, const matrix& mat);
private:
    int m_row;
    int m_col;
    int **m_matrix;
};

#endif //CLASSMATRIX_H

