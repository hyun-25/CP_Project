// CP_Project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

#include "CP_Project.h"
#include "io.h"
//#include "Ch10_Class.h"
#include "Vehicle.h"
#include "Animal.h"
#include "Bike.h"
#include "Atv.h"
#include "Arithmatic.h"
#include "Auto.h"
#include "Ch14_VirtualChild.h"
#include "Ch14_VirtualParent.h"
#include "Ch15_PureVirtualChild.h"
#include"Ch15_PureVirtualParent.h"

int main()
{
    std::cout << "Hello World!\n";

    // class ���� ����
 
    Vehicle Ray(2023, 12000000);
    Ray.PrintPrice();

    Ray.Price = 10000000;
    Ray.PrintPrice();

    Ray.SetYear(2021);

    cout << Ray.GetYear() << endl;

    Vehicle Sonata;


    // class ���� ����(����)
    Animal* Dog = new Animal;
    Dog->PrintFinger();

    delete Dog;

    // �ڽ� Ŭ���� ����
    Atv Moto;

    // ��ӹ��� Bike class�� ���
    Moto.PrintTire();
    cout << Moto.Price << endl;

    // Atv class ���
    Moto.PrintPrice();

    // �Լ� �����ε�
    Arithmatic Expression;

    Expression.Sum(50);

    Expression.Sum(50.123f);

    Expression.Sum(60, 70);
  

    // �Լ� �������̵�
    Moto.Print();

    // �����ڰ� ��������� ����
    // �ڽ� Ŭ���� ���� : ����� ����

    cout << "-----------------------------" << endl;
    Auto Mobile;

    Auto Avante(2024, 10000000);


    cout << "-----------------------------" << endl;
    //ArrayClass();

    //StringClass();

    VectorClass();

  
    VirtualParent* Parent = new VirtualParent;
    VirtualChild* Child = new VirtualChild;

    Parent->PrintClass();

    Child->PrintClass(); // Overriding �۵�

    Parent = Child;

    Parent->PrintClass();

    VirtualParent2* Parent2 = new VirtualParent2;
    VirtualChild2* Child2 = new VirtualChild2;

    Parent2->PrintClass();

    Child2->PrintClass(); // Overriding �۵�

    Parent2 = Child2;

    Parent2->PrintClass();

    cout << "-----------------------------" << endl;

    //PureVirtualParent PureParent; =>�߻�Ŭ������ �ܵ����� ��ü ������ �� ����
    //�߻�Ŭ������ ��ӹ޴� �ڽ� Ŭ������ ���� �����Լ��� ������ �ؾ���
    PureVirtualChild PureChild; 
    PureChild.Print();
    PureChild.PrintClass();

    cout << "-----------------------------" << endl;

    cout << SumNumber(3, 2) << endl;
    cout << SumNumber(3.231f, 5.645f) << endl;


    cout << SumType(10, 20) << endl;
    cout << SumType(10.567, 20.371);

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
// ���α׷� ����: <Ctrl+F5> �Ǵ� [�����] > [��������� �ʰ� ����] �޴�
// ���α׷� �����: <F5> Ű �Ǵ� [�����] > [����� ����] �޴�

// ������ ���� ��: 
//   1. [�ַ�� Ž����] â�� ����Ͽ� ������ �߰�/�����մϴ�.
//   2. [�� Ž����] â�� ����Ͽ� �ҽ� ��� �����մϴ�.
//   3. [���] â�� ����Ͽ� ���� ��� �� ��Ÿ �޽����� Ȯ���մϴ�.
//   4. [���� ���] â�� ����Ͽ� ������ ���ϴ�.
//   5. [������Ʈ] > [�� �׸� �߰�]�� �̵��Ͽ� �� �ڵ� ������ ����ų�, [������Ʈ] > [���� �׸� �߰�]�� �̵��Ͽ� ���� �ڵ� ������ ������Ʈ�� �߰��մϴ�.
//   6. ���߿� �� ������Ʈ�� �ٽ� ������ [����] > [����] > [������Ʈ]�� �̵��ϰ� .sln ������ �����մϴ�.
