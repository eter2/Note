# HTML #
'**H**yper **T**ext **M**arkup **L**anguage'의 약자.
**[W3C](https://www.w3.org/)** (국제민간표준화기구 홈페이지)

# TAG란? #
해당 영역이 어떤 역할을 해야 하는지 표시해주는 역할. 해당 태그의 역할은 `<`와 `>` 사이에 들어간다.

## TAG의 효용 ##
**접근성**! 각 태그를 이용해서 웹페이지의 정보를 효율적으로 나타낼 수 있다.

## TAG의 종류 ##
* 단독 사용 : 태그 표현 하나로 끝.
  * 예) img, input, br, hr, meta.. etc.
* 영역 지정 : 시작, 끝을 지정해주어야 한다. `<tag>`와 `</tag>`로 감싸주어야 한다.
  * 예) title, h1, strong, p.. etc.

## Attribute(속성)란? ##
태그로는 정보가 부족할 때 사용된다. 변경이 가능한 특성으로, 다른 값으로 설정할 수 있다.

## TAG의 기본 모양 ##
```html
<Tag attribute="속성값"> 내용 </Tag>
```

# HTML 문서의 기본 구조 #
(HTML5 기준)
```html
<!doctype html>
<html>
  <head>
    <meta charset="UTF-8"
    <title> </title>
  </head>
  <body>
  </body>
</html>
```
1. `<!doctype html>`은 이 문서의 종류를 웹 브라우저에 알려주기 위한 문서 형식 정의이다. (Document Type Definition, DTD)
1. '이 문서는 HTML로 마크업 되어 있음'을 알려주기 위한 `<html>` 태그가 위치한다. `<html>` `</html>` 태그 안에 다른 태그들이 위치한다.
  * **마크업 언어는** 태그 등을 이용해 문서를 구조적으로 구성하는 언어이다.
1. `<head>` 태그 안에는 문서를 읽을 때 우선적으로 처리해야 하는 것들이 위치한다. 일반적으로 `<title>`, `<meta>`, `<link>`, `<script>`, `<style>` 태그가 위치한다. 영역 지정 태그이다.
  * `<title>` 태그는 문서의 제목을 표현하는 영역 지정 태그이다. `<title>` 태그 안의 내용은 제목 표시줄에 나타난다.
  * `<meta>` 태그는 문서에 대한 메타 데이터를 입력하는 태그이다.
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
    ```
    `"UTF-8"`(유니코드), `"EUC-KR"`(확장완성형)
    * 이외에도 렌더링 엔진 지정(IE), 모바일 기기 화면 설정, 페이지 새로 고침 간격 지정이 가능하다.
  * `<link>` 태그는 외부 스타일시트 파일을 연결할 때 사용.
  ```HTML
  <link rel="stylesheet" href="파일경로">
  ```
  * `<style>` 태그는 스타일시트를 `<link>`태그를 이용하지 않고 문서내에 직접 정의한다. 영역을 지정해주는 태그이다.
  * `<script>` 태그는 영역 지정 태그로, 태그 안에는 스크립트 언어가 위치한다. 외부 스크립트 파일을 연결할 때는 src 속성을 이용한다.
  ```HTML
  <script src="파일 링크"></script>
  ```
1. `<body>` 태그 안에는 본문 내용들이 위치한다. 영역 지정 태그이다.

# Head #
`<h1>` `<h2>` ~ `<h6>` 태그를 이용해 머리말을 나타내는 영역 지정 태그이다.

# Paragraph #
`<p>` 태그를 이용한다. `<p>` 태그는 영역 지정 태그이므로 문단 시작과 끝을 지정해주어야 한다. 단락 간격은 CSS 태그를 이용해 조정할 수 있다.
  * `<br>` 태그와 비슷하게 표현되지만 `<p>` 태그는 단락 경계를 확실히 구분해준다!

# Insert #
* `<a>` 태그는 anchor의 약자로, 링크임을 알려주는 태그이다. href, target, title 속성과 자주 함께 쓰인다.
```HTML
<a href="http://www.github.com" title="GitHub homepage" target="_blank">GitHub</a>
```
<a href="http://www.github.com" title="GitHub homepage" target="blank">GitHub</a>
마크다운 언어에서는 `_`가 이태리체 로 반영되기에 제대로 적용되지 않아, blank로 결과값을 작성하였다.
  * href는 HyperText Reference의 약자이다.
  * `taret="_blank"`는 링크 클릭 시 새 페이지가 열리게 하는 속성이다. target에 들어가는 문자에 따라 링크가 표시되는 영역이 변화한다.
    * `_blank`와 `blank`의 차이는 frame의 개념을 이해해야 알 수 있다. 새 창을 띄우려면 `_blank`를 이용하자.
  * `title` 은 링크 내용을 보여주는 속성이다. 링크에 마우스 커서를 대면 링크에 대한 설명이 표시된다.
* `<img>` 태그는 이미지를 삽입하기 위한 태그이다.
```HTML
<img src="이미지 링크">
```
src는 source의 약자이다.
* `<li>` 태그로 목차를, `<ul>` 태그는 'Unordered list'의 약자로 목록 사이의 경계를 표시하고 'Ordered List'의 약자인 `<ol>` 태그로 목록을 넘버링한다.
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
* `<table>` 태그로 전체를 묶는다. `<table border="숫자"`와 같이 테두리를 표시할 수도 있다. `<tr>`로 행을 구분하고, `<td>`로 항목을 묶는다. `<thead>` 태그로 묶인 항목은 항상 표의 가장 위에 표시되며, `<tfoot>` 태그의 항목은 항상 가장 아래에 표시된다.
  * 과거에 Table을 레이아웃을 만드는 데 이용하기도 했었다. `<td rowspan="숫자">`는 기준칸부터 아래로 '숫자'만큼, `<td clospan="숫자">`는 기준칸부터 오른쪽으로 '숫자'만큼의 칸을 병합한다.
* 정보 입력
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

# Font #
```html
<strong>강조</strong>
<u>밑줄</u>
<em>이태리</em>
<small>작은 글씨</small>
<s>취소선</s>
단어 <cite>단어</cite>
유저는 <q>인용문</q>을 작성했다.

```
**result**
  * <strong>강조</strong>
  * <u>밑줄</u>
  * <em>이태리</em>
  * <small>작은 글씨</small>
  * <s>취소선</s>
    * 문서에서 삭제된 내용을 취소선으로 표현할 때는 `<del>` 태그를 이용한다.
    * <del>삭제 내용</del>
  * 단어 <cite>인용</cite>
    * 작품명을 표현할 때 사용.
  * 유저는 <q>인용문</q>을 작성했다.

# Ect #

* div : 어떤 더미 영역을 표현할 때 사용하는 태그

이외에도 `<dfn>`, `<abbr>`, `<time>` 등 다양한 태그가 있다.

