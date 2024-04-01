- 컨테이너 한개는 무조건 써야함
- csv 형식의 데이터베이스를 사용하여 특정 날짜에 대한 비트코인 가치를 출력해야함
- 입력으로 가격/날짜를 저장하는 두 번째 데이터베이스를 사용해야함. 평가해야 할 여러 가격/날짜가 저장됨.

1. csv 파일에서 데이터를 읽어와서 데이터베이스 구성
2. 두번째 데이터베이스에서 각각의 날짜/가격 데이터를 읽어옴
3. 각각의 날짜에 대해 데이터베이스에서 해당하는 비트코인 가격을 찾음
4. 찾은 가격을 출력해야함

규칙
1. 프로그램 이름은 btc
2. 인자로 파일을 받아와야 함
3. 각 줄은 date | value 형식을 따라야함
4. Year-Month-Day 포맷 형식이 유효한 형식임
5. 가치는 float형이나 0~1000 integer 양수여야함

예외
- 만약 입력으로 받은 날짜가 데이터베이스가 존재하지 않으면 데이터베이스에서 가장 가까운 날짜를 사용해야함. 상위 날짜가 아닌 하위 날짜를 사용해야한다.
- 이번 모듈에서 사용한 컨테이너는 다음 과제에서 쓰면 안됨