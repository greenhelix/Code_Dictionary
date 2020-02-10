# StringBuilder

- 기본적으로 String, StringBuffer, StringBuilder
  그러나, 왜 문자열을 변환할때, StringBuffer, StringBuilder 를 더쓴다.

  #### 그 이유는??? 간단히 기억하자.

  #### ** string은 새로운 주소값을 할당하기 때문에, 메모리관리에 취약해질수 밖에 없다. 즉, 느려진다. **

- StringBuilder
  - 변경가능한 문자열
  - no synch
- StringBuffer
  - 변경가능한 문자열
  - multiple thread safe

---

StringBuilder 선언

```java
StringBuilder hello  = new StringBuilder();
```
