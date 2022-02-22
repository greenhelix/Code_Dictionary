import pyautogui
import time
# 현재 마우스 위치 프린트 
print(pyautogui.position())

# 해당 위치로 마우스를 움직인다.
# pyautogui.moveTo(725, 444)

# 클릭을 한다. clicks는 클릭의 횟수 , interval은 누르는 간격을 말한다. 단위는 초이다. 
# pyautogui.click(clicks=10, interval= 1)
# pyautogui.moveTo(840, 775)
# pyautogui.click(clicks=1, interval= 1)

# 더블클릭을 한다. 
# pyautogui.doubleClick()

# 잠깐 쉬는 타이밍을 주기 위해서는 time을 import해준뒤 사용한다. 단위는 초이다.
# time.sleep(1)

# 타이핑을 한다. 
# pyautogui.typewrite('Hello')

# 원하는 키보드 버튼을 누르게 한다. 
# pyautogui.typewrite(['enter'])
# pyautogui.typewrite(['ctrl'])
# pyautogui.typewrite(['s'])
# pyautogui.moveTo(893, 161)
# pyautogui.click(clicks=1)
