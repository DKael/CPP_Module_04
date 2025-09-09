# CPP Module 04

1. 프로젝트 소개

CPP Module 04는 추상 클래스(Abstract class), 가상 함수(Virtual function), 다형성(Polymorphism) 개념을 중점적으로 학습하는 모듈입니다.
Animal, Dog, Cat, Brain 등의 클래스를 설계하며, 상속과 동적 바인딩을 통한 객체 지향 설계를 실습합니다.

2. 과제 목표
	•	추상 클래스와 순수 가상 함수 이해 및 구현
	•	동적 할당과 깊은 복사(Deep copy)의 필요성 체험
	•	소멸자에서의 메모리 해제 책임 확인
	•	다형성 기반의 일관된 인터페이스 제공

3. Exercise별 구현 사항
	•	ex00: Animal / Dog / Cat
	•	Animal 클래스를 기본 클래스로 정의
	•	makeSound() 가상 함수 선언, 파생 클래스에서 오버라이딩
	•	다형성을 통한 일관된 메서드 호출 실습
	•	ex01: Brain 클래스 추가
	•	Brain 클래스에 ideas[100] 멤버 배열 정의
	•	Dog, Cat 객체가 Brain을 멤버로 포함하도록 구현
	•	얕은 복사 문제 방지를 위해 깊은 복사 생성자/대입 연산자 구현
	•	ex02: Abstract Animal
	•	Animal을 추상 클래스(순수 가상 함수 포함)로 전환
	•	추상 클래스는 직접 인스턴스화 불가능, 파생 클래스는 구체화 가능
	•	ex03: Materia / Character / AMateria / Ice / Cure
	•	MateriaSource, Character 인터페이스 설계
	•	AMateria 추상 클래스와 이를 상속한 Ice, Cure 구현
	•	Character가 Materia를 장착/사용 가능하도록 구현
	•	동적 메모리 관리 및 깊은 복사 보장

4. 배운 점

4.1 추상 클래스와 인터페이스 개념
	•	순수 가상 함수(Pure virtual function) 설계 감각
	•	공통 인터페이스와 구체 구현 분리 원칙

4.2 다형성과 동적 바인딩
	•	vtable 기반 런타임 바인딩 동작 원리 이해
	•	참조/포인터를 통한 다형성 활용

4.3 깊은 복사와 얕은 복사
	•	기본 복사 생성자의 한계와 이중 해제 문제
	•	Rule of Three(복사 생성자/대입 연산자/소멸자) 일관 구현

4.4 메모리 관리와 소멸자 역할
	•	동적 할당 자원의 명시적 해제 필요성
	•	가상 소멸자(Virtual destructor)로 올바른 소멸 보장

4.5 컴포지션(Composition)과 캡슐화
	•	Brain 클래스와 같은 멤버 객체의 독립 수명 관리
	•	내부 상태 은닉과 접근자/수정자 메서드 설계

4.6 객체 지향 설계 원칙 적용
	•	ISP(인터페이스 분리 원칙)의 감각 습득
	•	다형성 기반 확장성과 유지보수성 강화

4.7 실무 감각
	•	동적 자원 관리와 RAII(Resource Acquisition Is Initialization) 원리 체득
	•	인터페이스-구현 분리로 테스트 가능성 및 재사용성 확보

5. Exercise별 실행 방법

6. ### 공통

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


7. 6️⃣ 기술 스택
언어: C++98
•	운영체제/환경: Unix/Linux
•	빌드 도구: GNU Make
•	디버그 도구: VSCode, valgrind
	•	개념: 추상 클래스, 순수 가상 함수, 상속, 다형성, 깊은 복사, 가상 소멸자
