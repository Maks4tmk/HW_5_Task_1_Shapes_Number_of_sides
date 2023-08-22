// Количество сторон.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

class Figure {
private:
    int sides_count;
    std::string name;
protected:
    Figure(std::string name, int sides_count) {
        this->name = name;
        this->sides_count = sides_count;
    }
public:
    Figure():Figure("Фигура", 0) {}

    int get_sides_count() { return sides_count; }
    std::string get_name() { return name; }

    void print() {
        std::cout << get_name() << ": " << get_sides_count() << std::endl;
    }

};

class Triangle: public Figure {
public:
    Triangle():Figure("Треугольник", 3) {}
};

class Quadrangle: public Figure {
public:
    Quadrangle():Figure("Четырёхугольник", 4) {}
};

int main()
{
    setlocale(LC_ALL, "ru");

    Figure figure;
    Triangle triangle;
    Quadrangle quadrangle;

    

    std::cout << "Количество сторон:" << std::endl;
    figure.print();
    triangle.print();
    quadrangle.print();

}
