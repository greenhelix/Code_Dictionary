# StringBuilder

- String, StringBuffer, StringBuilder

  #### string은 새로운 주소값을 할당하기 때문에, 메모리관리에 취약해질수 밖에 없다. 즉, 느려진다.

  #### 참고 사이트

  1. [API](<https://docs.oracle.com/javase/7/docs/api/java/lang/StringBuilder.html#insert(int,%20char)>)

  2. [tutorial](https://www.tutorialspoint.com/java/lang/stringbuilder_insert_chararray_len.html)

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

- append(boolean)
- append(char)
- append(char[])
- append(char[], str, end)
- append(CharSequence)
- append()
- append()
- append()

## insert

- insert(int, boolean)
  int 위치에다가 t/f의 글자를 박아줌.
- insert(int, charArray, chStr, chEnd)
  int 위치에다가 char배열의 값들을 다 붙여가지고 박아주는데
  char배열chStr 위치에서부터, chEnd 위치 **전**까지 범위임.

## charAt(int index)

## delete(int start, int end)

## getChars(int srcBegin, int srcEnd, char[] dst, int dstBegin)
