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

    // class 정적 선언
 
    Vehicle Ray(2023, 12000000);
    Ray.PrintPrice();

    Ray.Price = 10000000;
    Ray.PrintPrice();

    Ray.SetYear(2021);

    cout << Ray.GetYear() << endl;

    Vehicle Sonata;


    // class 동적 선언(생성)
    Animal* Dog = new Animal;
    Dog->PrintFinger();

    delete Dog;

    // 자식 클래스 생성
    Atv Moto;

    // 상속받은 Bike class의 멤버
    Moto.PrintTire();
    cout << Moto.Price << endl;

    // Atv class 멤버
    Moto.PrintPrice();

    // 함수 오버로딩
    Arithmatic Expression;

    Expression.Sum(50);

    Expression.Sum(50.123f);

    Expression.Sum(60, 70);
  

    // 함수 오버라이딩
    Moto.Print();

    // 생성자가 명시적으로 선언
    // 자식 클래스 선언 : 명시적 선언

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

    Child->PrintClass(); // Overriding 작동

    Parent = Child;

    Parent->PrintClass();

    VirtualParent2* Parent2 = new VirtualParent2;
    VirtualChild2* Child2 = new VirtualChild2;

    Parent2->PrintClass();

    Child2->PrintClass(); // Overriding 작동

    Parent2 = Child2;

    Parent2->PrintClass();

    cout << "-----------------------------" << endl;

    //PureVirtualParent PureParent; =>추상클래스는 단독으로 객체 생성할 수 없음
    //추상클래스를 상속받는 자식 클래스는 순수 가상함수를 재정의 해야함
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
// 프로그램 실행: <Ctrl+F5> 또는 [디버그] > [디버깅하지 않고 시작] 메뉴
// 프로그램 디버그: <F5> 키 또는 [디버그] > [디버깅 시작] 메뉴

// 시작을 위한 팁: 
//   1. [솔루션 탐색기] 창을 사용하여 파일을 추가/관리합니다.
//   2. [팀 탐색기] 창을 사용하여 소스 제어에 연결합니다.
//   3. [출력] 창을 사용하여 빌드 출력 및 기타 메시지를 확인합니다.
//   4. [오류 목록] 창을 사용하여 오류를 봅니다.
//   5. [프로젝트] > [새 항목 추가]로 이동하여 새 코드 파일을 만들거나, [프로젝트] > [기존 항목 추가]로 이동하여 기존 코드 파일을 프로젝트에 추가합니다.
//   6. 나중에 이 프로젝트를 다시 열려면 [파일] > [열기] > [프로젝트]로 이동하고 .sln 파일을 선택합니다.
