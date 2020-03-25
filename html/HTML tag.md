# 기본 구조 #
1. `<!doctype html>`은 이 문서의 종류를 웹 브라우저에 알려주기 위한 문서 형식 정의이다. (Document Type Definition, DTD)

# Head #
1. `<head lang="~~">`은 웹 접근성에 관한 내용이다. 페이지의 기본 언어를 명시해주어야 한다.

1. `<title>` 태그는 문서의 제목을 표현하는 영역 지정 태그이다. `<title>` 태그 안의 내용은 제목 표시줄에 나타난다.

1. `<meta>` 태그는 문서에 대한 메타 데이터를 입력하는 태그이다.

    * 작성자 정보
    ```html
    <meta name="author" content="작성자1, 작성자2, ..."
    ```
    * 검색어
    ```HTML
    <meta name="keywords" content="검색어1, 검색어2, 검색어3, ..."
    ```
    * 설명
    ```HTML
    <meta name="description" content="설명">
    ```
    * 인코딩 정보
    ```HTML
    <meta charset="UTF-8">

    <!-- "UTF-8" (유니코드), "EUC-KR"(확장완성형) -->
    ```
    * (모바일 및 기기의) 화면 설정
    ```html
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    ```
    * `html: 5`를 적어서 작성한 기본 구조의 문장이다. `viewport`란 화면 표시 영역을 말한다. viewport meta 태그는 viewport의 너비와 초기 배율을 설정하기 위해 사용한다.
      * viewport 너비 설정: `<meta name="viewport" content="width=~~~">`. 너비 단위는 px이고, meta 태그 내에서는 단위를 생략한다. content 안에 여러 속성값을 쓸 때는 `,`로 분리한다.
      * 너비를 장치너비로 설정: `<meta name="viewport" content="width=device-width">`. 브라우저를 장치 너비에 맞추어 표시한다. 너비를 장치 높이로 설정할 경우, `height`로 바꾸면 된다.
      * 초기 화면 배율 설정: `<meta name="viewport" content="width=device-width, initial-scale=1.0">`. `initial-scale`은 viewport의 초기 배율을 의미한다. 1.0은 100%를 의미한다.
      * 최소 최대 화면 비율 설정: `<meta name="viewport" content="width=device-width, initial-scale=1.0, minimum-scale=1.0, maximum-scale=3.0">`. 사용자의 화면 축소, 확대 비율을 설정할 수 있다.
      * 사용자가 크기 조절 못하게: `<meta name="viewport" content="user-scalable=no, width=device-width">`
    * 이외에도 렌더링 엔진 지정(IE), 페이지 새로 고침 간격 지정이 가능하다.

  1. `<link>` 태그는 외부 스타일시트 파일을 연결할 때 사용.
  ```HTML
  <link rel="stylesheet" href="파일경로">
  ```

  5. `<style>` 태그는 스타일시트를 `<link>`태그를 이용하지 않고 문서내에 직접 정의한다. 영역을 지정해주는 태그이다.

  1. `<script>` 태그는 영역 지정 태그로, 태그 안에는 스크립트 언어가 위치한다. 외부 스크립트 파일을 연결할 때는 src 속성을 이용한다.

  ```HTML
  <script src="파일 링크"></script>
  ```

# Body #

* 레이아웃을 위한 태그

1. `<header>`

1. `<nav>`

1. `<section>`

1. `<footer>`

1. `<aside>`

까지..


1. `<h1>` `<h2>` ~ `<h6>` 태그를 이용해 머리말을 나타낸다. 영역 지정 태그이다.

1. `<p>` 태그를 이용해 문단을 표시한다. `<p>` 태그는 영역 지정 태그이므로 문단 시작과 끝을 지정해주어야 한다. 단락 간격은 CSS 태그를 이용해 조정할 수 있다.
    * `<br>` 태그와 비슷하게 표현되지만 `<p>` 태그는 단락 경계를 확실히 구분해준다!

1. `<a>` 태그는 anchor의 약자로, 링크임을 알려주는 태그이다. href, target, title 속성과 자주 함께 쓰인다.
```HTML
<a href="http://www.github.com" title="GitHub homepage" target="_blank">GitHub</a>
```
  * href는 HyperText Reference의 약자이다.
  * `taret="_blank"`는 링크 클릭 시 새 페이지가 열리게 하는 속성이다. target에 들어가는 문자에 따라 링크가 표시되는 영역이 변화한다.
    * `_blank`와 `blank`의 차이는 frame의 개념을 이해해야 알 수 있다. 새 창을 띄우려면 `_blank`를 이용하자.
  * `title` 은 링크 내용을 보여주는 속성이다. 링크에 마우스 커서를 대면 링크에 대한 설명이 표시된다.
4. `<img>` 태그는 이미지를 삽입하기 위한 태그이다.
```HTML
<img src="이미지 링크">
```

5. `<ul>` 태그는 'Unordered list'의 약자로 순서가 없는 리스트이다. `<ol>` 태그는 'Ordered List'로 순서가 있는 리스트이다. 두 태그로 목차 전체를 묶고, `<li>` 태그로 개개별 목차를 표시한다.
    * 여러 줄의 `<li>` 태그를 만들 때 `li*n` (n은 숫자) 를 적으면 한 번에 만들 수 있다.
```HTML
<ul>
<li>항목</li>
<li>항목</li>
<ul>
```
```HTML
<ol>
<li>항목1</li>
<li>항목2</li>
</ol>
```
6.  `<table>` 태그로 전체를 묶는다. `<table border="숫자"`와 같이 테두리를 표시할 수도 있다. `<tr>`로 행을 구분하고, `<td>`로 항목을 묶는다. `<thead>` 태그로 묶인 항목은 항상 표의 가장 위에 표시되며, `<tfoot>` 태그의 항목은 항상 가장 아래에 표시된다.
    * 과거에 Table을 레이아웃을 만드는 데 이용하기도 했었다. `<td rowspan="숫자">`는 기준칸부터 아래로 '숫자'만큼, `<td clospan="숫자">`는 기준칸부터 오른쪽으로 '숫자'만큼의 칸을 병합한다.

7. 정보 입력
```HTML
<form action="데이터 전송 주소" method="get/post">
```
'get'은 url에 정보가 노출되고 'post'는 url에 정보가 노출되지 않는다.
```HTML
<p><input type="text"></p>
<p><input type="submit"></p>
<p><input type="button" value="버튼"></P>
<p><input type="reset"></p>
<p><input type="hidden" value="hidden"></p>
<p><label><input type="checkbox">체크</label></p>
<p><input type="file" method="post" enctype="multipart/form-data"></p>
<p><textarea cols="10" rows="2"></p>
```
 * 위와 같은 `<input>` 태그로 정보를 입력받은 뒤, `<form>` 태그의 주소에 정보를 전송한다. `<label>` 태그로 전송값들과 제출 버튼을 묶으면 제출 버튼을 눌러 입력값들을 함 전송할 수 있다. 같은 textbox는 구분할 수 없기에 `<name>` 태그로 구분값을 준다. 'value'는 기본값이다.
 * 이외에도 `<select>` 태그 등으로 정보를 입력받을 수 있다.

8. Font
```html
<strong>강조</strong>
<u>밑줄</u>
<em>이태리</em>
<small>작은 글씨</small>
<s>취소선</s>
단어 <cite>단어</cite>
유저는 <q>인용문</q>을 작성했다.

```

9. `<div>` : 어떤 더미 영역을 표현할 때 사용하는 태그

이외에도 `<dfn>`, `<abbr>`, `<time>` 등 다양한 태그가 있다.
