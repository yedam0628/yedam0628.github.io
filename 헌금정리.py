#주일헌금_이름과 액수
lords_day_name = []
lords_day_sum = []

#십일조_액수
tithe_sum = [0]

#선교헌금_선교지와 액수
mission_country = []
mission_sum = []

#총 예산(교회 예산, 청년부 예산)
church_budget = int()
youth_budget = int()


def lords_day_offering():
    church_budget = int()
    youth_budget = int()

    #2. 주일헌금- '청년부 예산'에 추가
    youth_budget += account
    #3.1 주일헌금을 처음냈을 경우
    if name not in lords_day_name:
        #주일헌금-리스트에 이름과 액수를 추가해준다.
        lords_day_name.append(name)
        lords_day_sum.append(account)
    #3.2 기존에 주일헌금을 낸 적이 있는 경우
    else:
        #주일헌금- 인덱스를 찾고 헌금액수를 더해준다.
        idx = lords_day_name.index(name)
        lords_day_sum[idx] += account
    #헌금한 사람과 액수를 보고한다.
    print(f"{name}님 {account}원 주일헌금으로 헌금하셨습니다.")
    print(f"주일헌금에 총 {sum(lords_day_sum)}원 모였습니다.")

def tithe():
    church_budget = int()
    youth_budget = int()

    #2. 십일조- '교회 예산'에 추가
    church_budget += account
    #3.1 십일조를 처음냈을 경우
    if tithe_sum[0] == 0:
        tithe_sum[0] = account
    #3.2 십일조를 낸 적이 있는 경우
    else:
        tithe_sum[0] += account

    #헌금한 사람과 액수를 보고한다.
    print(f"{name}님 {account}원 십일조로 헌금하셨습니다.")
    print(f"십일조에 총 {tithe_sum}원 모였습니다.")


def mission_offering():
    church_budget = int()
    youth_budget = int()

    #2. 선교헌금- '교회 예산'에 편성
    church_budget += account
    #선교헌금- 선교지 물어보기
    country = input("어느 선교지 헌금입니까?")
    #3.1 처음 헌금이 들어온 선교지일 경우
    if country not in mission_country:
        #선교헌금- 리스트에 선교지와 액수를 추가해준다.
        mission_country.append(country)
        mission_sum.append(account)
    #3.2 기존에 헌금이 들어온 적 있는 선교지일 경우
    else:
        #선교헌금- 인덱스를 찾고 헌금액수를 더해준다.
        idx = mission_country.index(country)
        mission_sum[idx] += account
    #헌금한 사람과 액수를 보고한다.
    print(f"{name}님 {account}원 선교헌금으로 헌금하셨습니다.")
    print(f"선교헌금에 총 {sum(mission_sum)}원 모였습니다.")
    
offering = """
        주일헌금
        십일조
        선교헌금
        """
        
while True:
    print(offering)
    #1. 헌금한 사람, 액수, 헌금 종류 등 입력받기
    types = input("어떤 헌금입니까?")

    #헌금 종류에 따라 구분하기
    if types == "주일헌금":
        name = input("누가 헌금했습니까?")
        account = int(input("얼마 헌금했습니까?"))
        lords_day_offering()

    elif types == "십일조":
        name = input("누가 헌금했습니까?")
        account = int(input("얼마 헌금했습니까?"))
        tithe()

    elif types == "선교헌금":
        name = input("누가 헌금했습니까?")
        account = int(input("얼마 헌금했습니까?"))
        mission_offering()

    #기록할 헌금이 끝난 경우
    else:
        print("기록을 종료합니다.")
        break
        
