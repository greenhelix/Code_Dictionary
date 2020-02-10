# StringBuilder

- String, StringBuffer, StringBuilder

  #### string은 새로운 주소값을 할당하기 때문에, 메모리관리에 취약해질수 밖에 없다. 즉, 느려진다.

---

### 그래서 빠른 것을 쓴다.

- StringBuilder
  - 변경가능한 문자열
  - no synch
- StringBuffer
  - 변경가능한 문자열
  - multiple thread safe

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

## insert

- insert(int, boolean)
  int 위치에다가 t/f의 글자를 박아줌.
- insert(int, charArray, chStr, chEnd)
  int 위치에다가 char배열의 값들을 다 붙여가지고 박아주는데
  char배열chStr 위치에서부터, chEnd 위치 **전**까지 범위임.

## charAt(int index)

## delete(int start, int end)

## getChars(int srcBegin, int srcEnd, char[] dst, int dstBegin)
