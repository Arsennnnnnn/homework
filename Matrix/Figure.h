#ifndef FIGURE_H
#define FIGURE_H

class Figure {
public:
    Figure() = default;
    Figure(const Figure&) = default;
    Figure& operator = (const Figure&) = default;
    Figure (Figure&&) = default;
    Figure& operator = (Figure&&) = default;
    virtual ~Figure() = default;
    virtual void move() = 0;

private:
    int m_color; // 0 - black, 1 - white
    int m_position[2];

};

#endif //FIGURE_H
