# EIP : Engineer Information Processing (https://www.q-net.or.kr/crf005.do?id=crf00505&jmCd=1320)
# Setup : https://docs.google.com/document/d/1jQkiXwYhQnPMESF7ObcpmMjq0vRiMTuVors_EgDXkmc/edit
import EIP_DB
import random

def playTopicTest(simpleQuiz: dict, topic: str):
    return 0

def shuffleQuiz(simpleQuiz: dict) -> dict:
    test = {}
    temp = list(simpleQuiz)
    random.shuffle(temp)
    for i in temp:
        test[i] = simpleQuiz[i]
        
    return test
 
def playAllTest(simpleQuiz: dict):  
    
    while(1):
        for k, v in simpleQuiz.items():
            print()
            print(f'{v[1]} 문제입니다...')
            print('💡',v[0], '\n') 
            cnt, answer = 4, ''
            
            while(cnt):
                print('🙄 답을 입력하시오. :')
                answer = input()
                if k == answer:
                    print('✅ 정답입니다! 👍👍👍👍 \n')
                    break
                
                if 'exit' == answer or '나가기' == answer or '종료' == answer:
                    break 
                
                if cnt == 1:
                    print('😂 틀렸습니다. 다음문제입니다.\n')
                    break
                
                print(f'\n😂 틀렸습니다.({cnt-1}번의 기회가 있습니다.)')
                cnt -=1

            if 'exit' == answer or '나가기' == answer or '종료' == answer:
                break   

        while(1):
            print('😆 모든 문제를 다 풀었습니다.😆 \n😮 계속 테스트를 보시겠습니까? (네, 아니오 로 대답하십시오.)')
        
            userWant = input()  
            
            if userWant == '아니오' or userWant == 'no':
                print(' 🎆 🎆 🎆 🎆 🎆 🎆 🎆 🎆 🎆 🎆 🎆 🎆 🎆 🎆 🎆\n',
                    '🎆 🎆 🎆 🎆 🎆 🎆 🎆 🎆 🎆 🎆 🎆 🎆 🎆 🎆 🎆\n',
                    '🎆 🎆 🎆 🎆 🎆 🎆 🎆 🎆 🎆 🎆 🎆 🎆 🎆 🎆 🎆\n',
                    '🎆 🎆 🎆 🎆 🎆 🎆 🎆 🎆 🎆 🎆 🎆 🎆 🎆 🎆 🎆\n',
                    )
                print('👌👌 테스트 종료입니다. 수고하셨습니다.😎') 
                print(' 🎆 🎆 🎆 🎆 🎆 🎆 🎆 🎆 🎆 🎆 🎆 🎆 🎆 🎆 🎆\n',
                    '🎆 🎆 🎆 🎆 🎆 🎆 🎆 🎆 🎆 🎆 🎆 🎆 🎆 🎆 🎆\n',
                    '🎆 🎆 🎆 🎆 🎆 🎆 🎆 🎆 🎆 🎆 🎆 🎆 🎆 🎆 🎆\n',
                    '🎆 🎆 🎆 🎆 🎆 🎆 🎆 🎆 🎆 🎆 🎆 🎆 🎆 🎆 🎆\n',
                    )       
                exit()
                
            elif userWant == '네' or userWant == 'yes': 
                print(' 🎆 🎆 🎆 🎆 🎆 🎆 🎆 🎆 🎆 🎆 🎆 🎆 🎆 🎆 🎆\n',
                    '🎆 🎆 🎆 🎆 🎆 🎆 🎆 🎆 🎆 🎆 🎆 🎆 🎆 🎆 🎆\n',
                    '🎆 🎆 🎆 🎆 🎆 🎆 🎆 🎆 🎆 🎆 🎆 🎆 🎆 🎆 🎆\n',
                    '🎆 🎆 🎆 🎆 🎆 🎆 🎆 🎆 🎆 🎆 🎆 🎆 🎆 🎆 🎆\n',
                    )
                print('😮다시 테스트를 시작하겠습니다.😮')
                print(' 🎆 🎆 🎆 🎆 🎆 🎆 🎆 🎆 🎆 🎆 🎆 🎆 🎆 🎆 🎆\n',
                    '🎆 🎆 🎆 🎆 🎆 🎆 🎆 🎆 🎆 🎆 🎆 🎆 🎆 🎆 🎆\n',
                    '🎆 🎆 🎆 🎆 🎆 🎆 🎆 🎆 🎆 🎆 🎆 🎆 🎆 🎆 🎆\n',
                    '🎆 🎆 🎆 🎆 🎆 🎆 🎆 🎆 🎆 🎆 🎆 🎆 🎆 🎆 🎆\n',
                    )
                break
            else:
                print()
                print()
                print('잘못된 입력입니다.')
                print(' 🎆 🎆 🎆 🎆 🎆 🎆 🎆 🎆 🎆 🎆 🎆 🎆 🎆 🎆 🎆\n',
                    '🎆 🎆 🎆 🎆 🎆 🎆 🎆 🎆 🎆 🎆 🎆 🎆 🎆 🎆 🎆\n',
                    '🎆 🎆 🎆 🎆 🎆 🎆 🎆 🎆 🎆 🎆 🎆 🎆 🎆 🎆 🎆\n',
                    '🎆 🎆 🎆 🎆 🎆 🎆 🎆 🎆 🎆 🎆 🎆 🎆 🎆 🎆 🎆\n',
                    )
        
if __name__ == '__main__':
    
    test = shuffleQuiz(EIP_DB.quizDB)
    
    playAllTest(test)