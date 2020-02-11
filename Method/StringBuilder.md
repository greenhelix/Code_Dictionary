# StringBuilder

- String, StringBuffer, StringBuilder

  #### string은 새로운 주소값을 할당하기 때문에, 메모리관리에 취약해질수 밖에 없다. 즉, 느려진다.

  #### 참고 사이트

  1. [API](<https://docs.oracle.com/javase/7/docs/api/java/lang/StringBuilder.html#insert(int,%20char)>)

  2. [tutorial](https://www.tutorialspoint.com/java/lang/stringbuilder_insert_chararray_len.htm)

---

### 그래서 빠른 것을 쓴다.

- StringBuilder
  - 변경가능한 문자열
  - 단일 환경에서 사용 (single thread)
- StringBuffer
  - 변경가능한 문자열
  - 여러개 같이 돌려야하는 환경(multi thread)

### 어떤게 더 좋은가? 더 빠른건 stringbuilder !

그렇다면 언제 stringbuffer사용? 말그대로 여러 파일에 동시에 적용해야하는
멀티 스레드 환경에서만 사용. 동기화 기능이 있기 때문에 상대적으로 느림.
장 단점이 있으니 잘 고려해야하고, \*_차이를 확실히 알아두자._

---

StringBuilder 선언방법

```java
StringBuilder hello  = new StringBuilder();
// or
StringBuilder man = new StringBuilder("hello github");
//형변환 Convert
// builder -> String
hello.toString();

```

---

## append

- append()
  - boolean : t/f 값을 뒤에 붙이는 것임
  - char : 단순 문자하나를 갔다 붙이는 것임
  - char[] : 문자 배열을 통째로 갔다가 붙일 수 있음.
  - charSequence : 변형가능한 문자를 갔다 붙임.
  - String
  - stringbuffer
  - int, double, float, long : 다 갔다붙이기 가능.
- append(char[], str, end)
  char배열에서, str인덱스 지점 부터 end전까지의 문자 배열을 붙이겠다.

## insert

- insert()
  - int, double, float, long
  - String, char, charSequence... 다 삽입가능
- insert(int, boolean)
  int 위치에다가 t/f의 글자를 박아줌.
- insert(int, charArray, chStr, chEnd)
  int 위치에다가 char배열의 값들을 다 붙여가지고 박아주는데
  char배열chStr 위치에서부터, chEnd 위치 **전**까지 범위임.

## charAt(int index)

## delete(int start, int end)

## legnth()

int형으로 길이를 리턴해줌.

## getChars(int srcBegin, int srcEnd, char[] dst, int dstBegin)

### codePointAt(int index)

해당 위치의 문자의 아스키코드를 리턴해줌.
