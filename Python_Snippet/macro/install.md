# pyauto gui 까는 방법

[설치 링크1](https://pyautogui.readthedocs.io/en/latest/install.html)
[설치 링크2](https://pyautogui.readthedocs.io/en/latest/install.html)

- 1. 파이썬 버전에 따라 안될 수도 될 수도 있지만, 공통적으로
     py -m pip install pyautogui 로 치면 거의 처리가 된다.
     py -3.8 ... 이렇게 버전명을 추가해야 하는 경우도 있다.
- 2. 파이썬의 시스템 속성에 추가를 해준다. 
     > ..python\scripts 
     > ..python 
     > 이렇게 두 경로를 시스템 속성 path 에 추가를 해준다. 

* 명령어 
> curl https://bootstrap.pypa.io/get-pip.py -o get-pip.py
> python get-pip.py 
> pip install pyautogui 


--------------

### 테스트 

pyautogui 가 제대로 작동하는지 확인하기 

> py 또는 python 을 쳐서 파이썬 환경으로 이동한다. 
아래의 명령어를 입력해본다. 

```python
import pyautogui
pyautogui.position()
```
위의 명령을 입력하고 enter를 누르면 해당 마우스의 위치 값이 나타난다. 


------------------

+ opencv 를 설치해야한다. 
+ pillow 를 설치해야한다. 





