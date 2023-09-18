// CP_Project.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include "io.h"

#include"CP_Project.h"
#include "Ch10_Class.h"
#include "Vehicle.h"
#include "Animal.h"
#include "Bike.h"
#include "Atv.h"
#include "Arithmatic.h"
#include "Auto.h"

int main()
{
    //std::cout << "Hello!\n";
    //PointerDefine();
    //DynamicVariable();
    //CountNumber();
    //AlphaNumber();
    //BallInsert();
    //BallSwap();
    
    //class 정적 선언
    Vehicle Ray(2003, 12000000);
    Ray.PrintPrice();

    Ray.Price = 10000000;
    Ray.PrintPrice();

    Ray.SetYear(2021);
    
    cout << Ray.GetYear() << endl;

    // class 동적 선언(생성)
    Animal* Dog = new Animal;
    Dog->PrintFinger();

    delete Dog;

    //자식 클래스 생성
    Atv Moto;
    //상속받은 Bike class의 멤버
    Moto.PrintTire();
    cout << Moto.Price << endl;

    //Atv class 멤버
    Moto.PrintPrice();

    // 함수 오버로딩

    Arithmatic Expression;
    Expression.Sum(50);
    Expression.Sum(50.123f);
    Expression.Sum(60, 70);

    //함수 오버라이딩
    Moto.Print();

    //생성자가 명시적으로 선언
    //자식 클래스 선언 : 명시적 선언
    Auto Mobile();
    Mobile().PrintPrice();


    
}

// 프로그램 실행: <Ctrl+F5> 또는 [디버그] > [디버깅하지 않고 시작] 메뉴
// 프로그램 디버그: <F5> 키 또는 [디버그] > [디버깅 시작] 메뉴

// 시작을 위한 팁: 
//   1. [솔루션 탐색기] 창을 사용하여 파일을 추가/관리합니다.
//   2. [팀 탐색기] 창을 사용하여 소스 제어에 연결합니다.
//   3. [출력] 창을 사용하여 빌드 출력 및 기타 메시지를 확인합니다.
//   4. [오류 목록] 창을 사용하여 오류를 봅니다.
//   5. [프로젝트] > [새 항목 추가]로 이동하여 새 코드 파일을 만들거나, [프로젝트] > [기존 항목 추가]로 이동하여 기존 코드 파일을 프로젝트에 추가합니다.
//   6. 나중에 이 프로젝트를 다시 열려면 [파일] > [열기] > [프로젝트]로 이동하고 .sln 파일을 선택합니다.
