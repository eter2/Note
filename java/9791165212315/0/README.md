# 자기 평가 - FizzBuzz #

> 1부터 100까지의 숫자를 콘솔에 출력하는 프로그램을 (자바로) 작성하시오. 단 3의 배수마다 숫자 대신 'Fizz'를 출력하고 5의 배수마다 'Buzz'를 출력하시오. 3과 5의 공배수이면 'FizzBuzz'를 출력하시오.

> 객체 지향을 적용하고 클래스와 인터페이스 사용 여부 확인하기 위해 확장

> FizzBuzz 알고리즘을 FizzBuzz라는 인터페이스를 구현하는 ConsoleBasedFizzBuzz라는 클래스로 구현해야 함. 이 인터페이스는 추력할 처음과 마지막 숫자를 인수로 받는 메서드를 제공. 별개의 Main 클래스에 들어 있는 main 메서드에서는 1부터 콘솔에서 전달받은 값까지 세는 ConsoleBasedFizzBuzz 구현과 함께 FizzBuzz 인터페이스를 사용해야 함.

간략한 개요
```java
interface FizzBuzz {
    void print(int from, int to);
}

class ConsoleBasedFizzBuzz implements FizzBuzz {
    // TODO: FizzBuzz 인터페이스 구현
}

class Main {
    // TODO: main 메서드 사용
    // TODO: 1부터 max까지 fizz buzz 출력
    // TODO: max는 콘솔로부터 전달받음
}
```