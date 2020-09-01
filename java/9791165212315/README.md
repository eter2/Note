# 자바 코딩의 기술 #
## 목차
0. [자기 평가](https://github.com/eter2/Note/blob/master/java/9791165212315/0)
1. [우선 정리부터](#우선-정리부터)
1. [코드 스타일 레벨 업](#코드-스타일-레벨-업)
1. [슬기롭게 주석 사용하기](#슬기롭게-주석-사용하기)

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