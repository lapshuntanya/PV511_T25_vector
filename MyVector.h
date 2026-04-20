#pragma once

template<typename Type>
class MyVector {
    Type* arr;
    int size;

public:
    MyVector();
    MyVector(int size, Type value);
    ~MyVector();

    int getSize() const;	// повертає розмірність масиву
    void print()const;	// виведення всіх елементів масиву

    void push_back(Type item);	// додавання елемента item у кінець масиву
    Type& operator[](int number);

    Type find_max()const; // пошук елемента з максимальним значенням
    Type find_min()const; // пошук елемента з мінімальним значенням

};