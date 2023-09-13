#include "io.h"

void OvenTime() {

  int StartHour, StartMinute, CookingTime, FinishHour;

  /*  cout << "시작시각 시를 입력하시오.(0-23)";
    cin >> StartHour;
    if (StartHour > 23 || StartHour < 0) {
      cout << "0-23사이의 수를 입력하시오" << endl;
      cout << "시작시각 시를 입력하시오.(0-23)";
      cin >> StartHour;

    }

    else {
      cout << "시작시각 분을 입력하시오.(0-59)";
      cin >> StartMinute;

      if (StartMinute > 59 || StartMinute < 0) {
        cout << "0-59사이의 수를 입력하시오" << endl;
      }

      else {
        cout << "요리하는데 필요한 시간을 입력하시오.(0이상 1000이하)";
        cin >> CookingTime;

        if (CookingTime > 1000 || CookingTime < 0) {
          cout << "0-1000사이의 수를 입력하시오" << endl;
        }

        else {
          cout << (StartHour + ((StartMinute + CookingTime) / 60)) << "시";
          cout << ((StartMinute + CookingTime) % 60) << "분" << endl;
        }
      }
    }
  }*/
  /* cout << "시작시각 시를 입력하시오.(0-23)";
    cin >> StartHour;

    cout << "시작시각 분을 입력하시오.(0-59)";
    cin >> StartMinute;

    cout << "요리하는데 필요한 시간을 입력하시오.(0이상 1000이하)";
    cin >> CookingTime;

    //입력받은 값에 대해서 시간범위 안에 포함되는지 여부 판단
    //범위를 벗어나는 값이 입력되면 오류메세지를 출력하고 다시 입력받음

    //시작시간의 분과 요리 시간의 분 값을 더했을 때 60이 넘었을 때
    //시 부분에 1을 증가시키고 분 값은 60을 뺀 값으로 출력

    cout << (StartHour + ((StartMinute + CookingTime) / 60)) << "시";
    cout << ((StartMinute + CookingTime) % 60) << "분" << endl; */

  while (true) {
    cout << "시작시각 시를 입력하시오.(0-23)";
    cin >> StartHour;

    // 0<= StartHour <=23 : StartHour >= 0 && StartHour<=23
    if (StartHour >= 0 && StartHour <= 23) {
      break;
    } else {
      cout << "잘못 입력하셨습니다." << endl;
    }
  }

  while (true) {
    cout << "시작시각 분을 입력하시오.(0-59)";
    cin >> StartMinute;

    if (StartMinute >= 0 && StartMinute <= 59) {
      break;
    } else {
      cout << "잘못 입력하셨습니다." << endl;
    }
  }

  while (true) {
    cout << "요리하는데 필요한 시간을 입력하시오.(0이상 1000이하)";
    cin >> CookingTime;

    if (StartHour >= 0 && StartHour <= 1000) {
      break;
    } else {
      cout << "잘못 입력하셨습니다." << endl;
    }
  }

  int AddHour = (StartMinute + CookingTime) / 60;
  int FinishMinute = (StartMinute + CookingTime) % 60;

  //시작 시간에 요리 시간으로 추가되는 시간을 더했을 때 24가 넘었을 때
  // 시간을 0부터 시작하도록 조정해줌

  FinishHour = (StartHour + AddHour) % 24;
  cout << FinishHour << ":" << FinishMinute << endl;
}
//입력받은 값에 대해서 시간범위 안에 포함되는지 여부 판단
//범위를 벗어나는 값이 입력되면 오류메세지를 출력하고 다시 입력받음

//시작시간의 분과 요리 시간의 분 값을 더했을 때 60이 넘었을 때
//시 부분에 1을 증가시키고 분 값은 60을 뺀 값으로 출력

void Quadrant() {
  int X;
  int Y;

  cout << "X를 입력하시오.(단, 0은 제외)";
  cin >> X;

  cout << "Y를 입력하시오.(단, 0은 제외)";
  cin >> Y;

  // X > 0 && Y > 0
  // X < 0 && Y > 0
  // X > 0 && Y < 0
  // X < 0 && Y < 0
  if (X > 0 && Y > 0) {
    cout << "1" << endl;
  } else if (X < 0 && Y > 0) {
    cout << "2" << endl;
  } else if (X > 0 && Y < 0) {
    cout << "4" << endl;
  } else {
    cout << "3" << endl;
  }
}

void LeapYear() {
  int Year;
  cout << "연도를 입력해주세요.";
  cin >> Year;

  // Year % 4 == 0 : 4의 배수
  // Year % 100 != 0 : 100의 배수가 아님
  //  (Year % 4 == 0)&&(Year % 100 != 0)
  //  Year % 400 == 0
  //((Year % 4 == 0)&&(Year % 100 != 0)) || Year % 400 == 0

  if (((Year % 4 == 0) && (Year % 100 != 0)) || Year % 400 == 0) {
    cout << "윤년" << endl;
  } else {
    cout << "평년" << endl;
  }
}

void SizeComparison() {
  int Value1 = 0;
  int Value2 = 0;

  cout << "첫번째 값을 입력해주세요.";
  cin >> Value1;

  cout << "두번째 값을 입력해주세요.";
  cin >> Value2;

  if (Value1 > Value2) {
    cout << ">" << endl;
  } else if (Value1 < Value2) {
    cout << "<" << endl;
  } else {
    cout << "=" << endl;
  }
}
