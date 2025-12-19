#include <iostream>
using namespace std;
// vector is an user defined data structure that store data in linear function and increment his capacity twice when size==capacity and need to insert a new element,i.e its like a dynamic array that increament size automatically by twice when insert a data;
class Vector
{
public:
    int size;     // size is the total used size
    int capacity; // capacity is the size availble
    int *arr;
    Vector()
    {
        this->size = 0;
        this->capacity = 1;
        this->arr = new int[1];
    }
    void push_back(int data)
    {
        if (this->size == this->capacity)
        {
            this->capacity = this->capacity * 2;
            this->arr= (int *)realloc(this->arr, this->capacity*4);
            this->arr[this->size] = data;
            this->size++;
        }
        else
        {
            this->arr[this->size] = data;
            this->size++;
        }
    }
    void pop_back()
    {
        if (this->size == 0)
        {
            return;
        }
        else
        {
            this->size--;
        }
    }
    void printVector()
    {
        for (int i = 0; i < this->size; i++)
        {
            cout << this->arr[i] << " ";
        }
        cout << endl;
    }
};
int main()
{

    Vector v;

    // for (int i = 0; i < 10; i++)
    // {
    //     v.push_back(i+1);
    // }
    // v.printVector();
    v.push_back(2);
    v.printVector();

    cout << "size: " << v.size << " " << "capacity: " << v.capacity << " " << endl;
    v.push_back(3);
    v.printVector();

    cout << "size: " << v.size << " " << "capacity: " << v.capacity << " " << endl;

    v.push_back(4);
    v.printVector();

    cout << "size: " << v.size << " " << "capacity: " << v.capacity << " " << endl;

    v.push_back(5);
    v.printVector();

    cout << "size: " << v.size << " " << "capacity: " << v.capacity << " " << endl;

    v.push_back(6);
    v.printVector();

    cout << "size: " << v.size << " " << "capacity: " << v.capacity << " " << endl;

    v.push_back(7);
    v.printVector();

    cout << "size: " << v.size << " " << "capacity: " << v.capacity << " " << endl;

    v.push_back(8);
    v.printVector();
    cout << "size: " << v.size << " " << "capacity: " << v.capacity << " " << endl;

    v.push_back(9);
    v.printVector();
    cout << "size: " << v.size << " " << "capacity: " << v.capacity << " " << endl;

    v.push_back(10);
    v.printVector();
    cout << "size: " << v.size << " " << "capacity: " << v.capacity << " " << endl;

    v.push_back(11);
    v.printVector();
    cout << "size: " << v.size << " " << "capacity: " << v.capacity << " " << endl;

    v.push_back(12);
    v.printVector();
    cout << "size: " << v.size << " " << "capacity: " << v.capacity << " " << endl;

    v.push_back(13);
    v.printVector();
    cout << "size: " << v.size << " " << "capacity: " << v.capacity << " " << endl;

    v.push_back(14);
    v.printVector();
    cout << "size: " << v.size << " " << "capacity: " << v.capacity << " " << endl;

    v.push_back(15);
    v.printVector();
    cout << "size: " << v.size << " " << "capacity: " << v.capacity << " " << endl;

    v.push_back(16);
    v.printVector();
    cout << "size: " << v.size << " " << "capacity: " << v.capacity << " " << endl;
    
    v.push_back(17);
    v.printVector();
    cout << "size: " << v.size << " " << "capacity: " << v.capacity << " " << endl;
      v.push_back(18);
    v.printVector();
    cout << "size: " << v.size << " " << "capacity: " << v.capacity << " " << endl;
    // v.pop_back();
    // v.printVector();
    // cout << v.size << " " << v.capacity << " " << endl;
    // v.pop_back();
    // v.printVector();
    // cout << v.size << " " << v.capacity << " " << endl;
    return 0;
}