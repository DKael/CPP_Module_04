# CPP Module 04

## 1️⃣ 프로젝트 소개

CPP Module 04는 추상 클래스(Abstract class), 가상 함수(Virtual function), 다형성(Polymorphism) 개념을 중점적으로 학습하는 모듈입니다.
Animal, Dog, Cat, Brain 등의 클래스를 설계하며, 상속과 동적 바인딩을 통한 객체 지향 설계를 실습합니다.

## 2️⃣ 과제 목표
	•	추상 클래스와 순수 가상 함수 이해 및 구현
	•	동적 할당과 깊은 복사(Deep copy)의 필요성 체험
	•	소멸자에서의 메모리 해제 책임 확인
	•	다형성 기반의 일관된 인터페이스 제공

## 3️⃣ Exercise별 구현 사항
### ex00 — Polymorphism
* Animal 클래스를 기본 클래스로 정의
* makeSound() 가상 함수 선언, 파생 클래스에서 오버라이딩
* 다형성을 통한 일관된 메서드 호출 실습

### ex01 —  I don’t want to set the world on fire
* Brain 클래스에 ideas[100] 멤버 배열 정의
* Dog, Cat 객체가 Brain을 멤버로 포함하도록 구현
* 얕은 복사 문제 방지를 위해 깊은 복사 생성자/대입 연산자 구현

### ex02 — Abstract class
* Animal을 추상 클래스(순수 가상 함수 포함)로 전환
* 추상 클래스는 직접 인스턴스화 불가능, 파생 클래스는 구체화 가능

### ex03 — Interface & recap
* MateriaSource, Character 인터페이스 설계
* AMateria 추상 클래스와 이를 상속한 Ice, Cure 구현
* Character가 Materia를 장착/사용 가능하도록 구현
* 동적 메모리 관리 및 깊은 복사 보장

## 4️⃣ 배운 점

### 4.1 예외 중심 설계와 불변식 강제
* 생성자/수정자 경계에서의 등급 범위 검증, 실패 시 즉시 throw로 모델 일관성 보장
### 4.2 커스텀 예외 계층의 의도 표현력
* GradeTooHigh/LowException 분리로 오류 원인 명료화, what() 메시지 일관성
### 4.3 예외 안전성 보장(기본/강한)
* 변경 전 검증-적용 순서 설계, 부작용 전 예외 발생으로 상태 롤백 불요 구조 확립
### 4.4 경계(throw)–핸들러(catch) 분리 전략
* “던지는 곳(도메인 모델)”과 “받는 곳(앱 경계)” 분리로 가독성/유지보수성 향상
### 4.5 다형적 실행 모델과 가상 소멸자
* AForm 기반 execute() 오버라이드, 가상 소멸자로 메모리 해제 안전성 확보
### 4.6 사전조건 검사 공통화
* AForm::checkExecutable_(signed, execGrade, executor) 유틸로 중복 제거·정책 일관화
### 4.7 불변(immutable) 필드의 설계 이점
* const name·const signGrade/execGrade 고정으로 객체 생성 후 정책 변조 방지
### 4.8 팩토리 패턴과 매핑 테이블
* 문자열→생성자 매핑으로 개방/폐쇄 원칙(OCP) 준수, 신규 폼 추가 시 영향 최소화
### 4.9 스트림 출력 연산자와 디버깅 일관성
* operator<< 로 상태 스냅샷 표준화, 테스트/로깅 가독성 개선
### 4.10 파일/확률 로직의 결정성 제어
* Shrubbery의 파일 I/O 예외 처리, Robotomy의 난수 시드/확률 검증로직 분리
### 4.11 const-correctness와 참조 기반 인터페이스
* 불필요한 복사 방지, 객체 수명·소유권 의도 명확화


## 5️⃣ Exercise별 실행 방법

### 공통

bash
```
make                      # 전체 빌드
make clean / fclean / re  # 재빌드 / 정리
```

### ex00

bash
```
./party_animals
```

### ex01

bash
```
./brain
```

### ex02

bash
```
./abstract

```

### ex03

bash
```
./character
```


## 6️⃣ 기술 스택
	•	언어: C++98
	•	운영체제/환경: Unix/Linux
	•	빌드 도구: GNU Make
	•	디버그 도구: VSCode, valgrind
	•	개념: 추상 클래스, 순수 가상 함수, 상속, 다형성, 깊은 복사, 가상 소멸자
