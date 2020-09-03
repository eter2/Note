# 자바 코딩의 기술 #
## 목차
0. [자기 평가](https://github.com/eter2/Note/blob/master/java/9791165212315/0)
1. [우선 정리부터](#우선-정리부터)
1. [코드 스타일 레벨 업](#코드-스타일-레벨-업)
1. [슬기롭게 주석 사용하기](#슬기롭게-주석-사용하기)
1. [올바르게 명명하기](#올바르게-명명하기)
1. [문제 발생에 대비하기](#문제-발생에-대비하기)
1. [올바르게 드러내기](#올바르게-드러내기)

## 우선 정리부터
* 쓸모없는 비교 피하기
* 부정 피하기
* 불 표현식을 직접 반환
    * '드 모르간의 법칙'을 이용해 조건식을 간단히 정리
* 불 표현식 간소화
    * `()`로 명확하게 표현: `&&`가 `||`보다 항상 먼저 평가된다. 우선 순위를 다 기억하지 못하기 때문에 `()`로 표현하자.
* 조건문에서 NullPointerException 피하기
    * 인수를 검증할 때는 순서가 중요
* 스위치 실패 피하기
* 항상 괄호 사용하기
* 코드 대칭 이루기
    * 코드의 목적에 따라 다른 코드 블록으로 분리

## 코드 스타일 레벨 업
* 매직 넘버를 상수로 대체
    * 매직 넘버: 의미가 없는 숫자지만 프로그램의 동작을 제어
* 정수 상수 대신 열거형
* For 루프 대신 For-Each
    * 변수명 명명 규칙: `for(타입 단수명: 복수명)`
* 순회하며 컬렉션 수정하지 않기
    * `Iterator`: 첫 번째 원소부터 시작해 리스트 내 원소를 가리키는 포인터처럼 동작
* 순회하며 계산 집약적 연산하지 않기
* 새 줄로 그루핑
* 이어붙이기 대신 서식화
    * 서식 문자열: `String.format()`이나 `System.out.printf()`
* 직접 만들지 말고 자바 API 사용하기

## 슬기롭게 주석 사용하기
* 지나치게 많은 주석 없애기
    * 코드만 보아서는 드러나지 않는 정보가 들어간 주석만 남기기
* 주석 처리된 코드 제거
* 주석을 상수로 대체
* 주석을 유틸리티 메서드로 대체
* 구현 결정 설명하기
* 예제로 설명하기
* 패키지를 JavaDoc으로 구조화하기
* 클래스와 인터페이스를 JavaDoc으로 구조화하기
* 메서드를 JavaDoc으로 구조화하기

## 올바르게 명명하기
* 자바 명명 규칙 사용하기
    * [참고 페이지](http://www.oracle.com/technetwork/java/codeconventions-150003.pdf)
    * 클래스: 대문자로 시작
    * 상수: 모두 대문자, 밑줄로 구분 (ex. WALKING_SPEED)
    * 메서드: 동사로 명명하거나 동사로 시작(is, has, save, get, set 등)
    * 변수: 명사(ex. serialNumber)
    * 패키지: 대문자 사용하지 않음
* 프레임워크에는 Getter/Setter 규칙 적용
    * [참고 페이지](http://download.oracle.com/otndocs/jcp/7224-javabeans-1.01-fr-spec-oth-JSpec/)
* 한 글자로 명명하지 않기
* 축약 쓰지 않기
* 무의미한 용어 쓰지 않기
* 도메인 용어 사용하기

## 문제 발생에 대비하기
* 빠른 실패
* 항상 가장 구체적인 예외 잡기
* 메시지로 원인 설명
* 원인 사슬 깨지 않기
* 변수로 원인 노출
* 타입 변환 전에 항상 타입 검증하기
    * 비 원시 자바 타입은 모두 `Object`로부터 상속받기 때문에 지역 변수 타입을 `Object`로 한다면 실패 없음
    * `instanceof` 연산자로 타입을 검증
        * `instanceof` : `a instanceof b`로 사용. a를 b 타입으로 변환할 수 있으면 true, 하지 못하면 false 반환.
    * 프로그램이 외부와 상호작용할 때 예상하지 못한 입력을 처리하도록 대비
* 항상 자원 닫기
    * `try-with-resources` 이용: try 범위 내에서 자원을 쓰고, 블록이 끝나면 `close()` 호출
        * `AutoCloseable` 인터페이스를 구현한 클래스여야 동작
* 항상 다수 자원 닫기
* 빈 catch 블록 설명하기
    * 변수명을 `ignored`로 변경
    * 주석 추가

## 올바르게 드러내기
* Given-When-Then으로 테스트 구조화
    * ~가 주어졌을 때(given) - ~를 ~한 경우(when) - 그러면(then) ~다
    * 메서드에 `@Test` 표기 추가하면 JUnit이 테스트로 실행
* 의미 있는 어서션 사용하기
* 실제 값보다 기대 값을 먼저 보이기
* 합당한 허용값 사용하기
    * float나 double을 사용할 때 허용 수준을 명시
        * 돈에는 부동소수점 연산을 하지 말자
        * long 변수에 저장하거나 BigDecimal 사용
* 예외 처리는 JUnit에 맡기기
* 테스트 설명하기
    * 메서드 명을 명확하게 수정
    * JUnit5 사용
        * `@DisplayName`을 이용해 설명 작성
        * `@Disabled` 형식을 이용해 비활성화 이유 작성
* 독립형 테스트 사용하기
    * `@BeforeEach`와 `@BeforeAll` 사용 최소화
    * 테스트 전체를 설정하는 클래스 생성
* 테스트 매개변수화
    * 매개변수화 해서 매개변수를 실제 테스트 코드와 분리
* 경계 케이스 다루기
    * String: null(null 참조), ""(빈 문자열), " "(여백 문자만 포함하는 문자열), 영문자가 아닌 특수문자를  포함하는 String
    * int: 0, 1, -1, Integer.MAX_VALUE, Integer.MIN_VALUE
    * double: 0, 1.0, -1.0, Double.MAX_VALUE, Double.MIN_VALUE
    * Object[]: null, {}, {null}, {new object(), null}
    * List<Object>: null, Collections.emptyList(), Collections.singletonList(null), Arrays.asList(new Object(), null)
