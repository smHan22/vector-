실습과제 1)

-다음 행렬 계산을 수행하여 결과를 출력하는 vector 클래스를 이용한 C++ 언어 프로그램을 작성하시오.

● score1과 score2는 각각 2x2크기의 2차원 벡터로 초기화.

● result는 결과를 저장할 빈 2차원 벡터이며, Q는 각 행의 덧셈 결과를 저장할 1차원 벡터.

● 두개의 중첩된 for루프를 사용하여 score1과 score2 각 요소를 탐색 후 각 요소의 합을 Q벡터에 추가.

● 한 행의 모든 요소를 더한 후, Q벡터를 result 벡터에 추가하고 Q 벡터를 클리어.

● 또 다른 두 개의 중첩된 for 루프를 사용하여 result 벡터의 요소를 출력

![image](https://github.com/smHan22/vector-/assets/90818408/0ee157b9-c82f-4e2f-b5fd-0a5a617307e9)

![image](https://github.com/smHan22/vector-/assets/90818408/e68a7d5e-9ef9-41d0-af9a-0feb2091ecf8)



실습과제 2)

-3명 학생이 국어, 영어, 수학 성적을 입력 받아 각 학생의 평균값을 구한 후 최우수 학생의 성적을 출력하는 vector 클래스를 이용한 C++ 프로그램을 작성하라.

● score는 각 학생의 성적을 저장할 2차원 벡터이며, best_student는 최고 평균 점수를 받은 학생의 인덱스.

● 3명의 학생에 대해 반복하며, 각 학생의 국어, 영어, 수학 성적을 입력받아 temp 벡터에 저장.

● 입력이 완료되면 temp 벡터를 score 벡터에 추가.

● 각 학생에 대해 반복하면서 총점을 계산하고, 총점을 3으로 나누어 평균 점수를 계산.

● 계산된 평균 점수가 현재까지의 최고 평균 점수 highest_avg보다 높으면 최고 평균 점수를 갱신하고 최고 학생의 인덱스를 업데이트.

● 최고 평균 점수를 받은 학생의 인덱스는 0부터 시작하므로, 1을 더하여 출력함.

![image](https://github.com/smHan22/vector-/assets/90818408/b41db618-5b5b-49e3-9264-cfff83609e80)

![image](https://github.com/smHan22/vector-/assets/90818408/48c850db-4397-4cc8-bced-c710c2a6476c)



실습과제 3)
-다음 행렬을 vector 클래스에 저장하고 원소 중에서 최대값과 위치를 구하는 C++ 프로그램을 작성하라.

● score는 초기값이 설정된 2차원 벡터이며, max_value는 벡터의 첫 번째 요소 score[0][0]으로 초기화된 최대값을 저장하는 변수.

● 두 개의 중첩된 for 루프를 사용하여 2차원 벡터 score의 모든 요소를 확인.

● 각 요소가 현재 max_value보다 큰 경우, max_value를 해당 요소로 업데이트하고, max_row와 max_col을 해당 요소의 위치로 업데이트.

● 최대값과 그 위치를 출력함. 행과 열 인덱스는 0부터 시작하므로 1을 더해서 출력

![image](https://github.com/smHan22/vector-/assets/90818408/e3e568d5-89f6-4323-9348-fdb3e917c94a)

![image](https://github.com/smHan22/vector-/assets/90818408/dc46a800-7986-4951-aecb-4178333b41d6)



실습과제 4)

-다음 행렬을 vector 클래스를 이용하여 저장하고 원소 중에서 음수를 0으로 수정하고 양수는 255로 수정하여 저장하고 그 결과를 출력하는 C++ 프로그램을 작성하라.

● score는 초기값이 설정된 2차원 벡터.

● 두 개의 중첩된 for 루프를 사용하여 2차원 벡터 score의 모든 요소를 확인.

● 각 요소가 음수인 경우엔 해당 요소를 0으로, 각 요소가 0 이상인 경우엔 해당 요소를 255로 설정

● 수정된 벡터를 출력

![image](https://github.com/smHan22/vector-/assets/90818408/defc93d0-8d77-4c3c-be2e-8406329046ec)

![image](https://github.com/smHan22/vector-/assets/90818408/2254f6b0-6c17-4463-b379-b11c526933df)
