enum BloodType { A, B, AB, O }

void main() {
  //List -> 배열인듯
  List<String> riize = ['수현', '원빈', '성찬'];
  List<int> numbers = [1, 2, 3, 4, 5];

  print(numbers);
  print(riize[1]);
  print(riize.length);
  riize.add('은석');
  print(riize);
  riize.remove('수현');
  print(riize);
  riize.remove('수현');
  print(riize);

  //Map
  Map<String, String> dictionary = {
    'Harry Potter': '해리포터',
    'Wednesday': '웬즈데이',
    'Conan': '코난',
  };

  Map<String, bool> dictionary2 = {
    'Harry Potter': true,
    'Wednesday': true,
    'Conan': false,
  };

  dictionary2.addAll({'You': false, 'Me': true, 'We': true}); //여러 개 한 번에 추가
  dictionary2['Joja'] = false;

  print(dictionary);
  print(dictionary2['You']);
  print(dictionary2);

  dictionary2.remove('Conan');
  print(dictionary2);
  print(dictionary2.keys);
  print(dictionary2.values);

  //Set -> 중복 처리 해줌
  final Set<String> names = {'윤수현', '박수현', '이수현', '윤수현'};
  print(names);
  names.add('권수현');
  names.remove('이수현');
  print(names);

  int total = 0;
  List<int> number = [1, 10, 100, 1000, 10000];
  for (var i = 0; i < number.length; i++) {
    total += number[i];
  }

  print(total);

  for (var a in number) {
    print(a);
  }

  int total2 = 0;
  for (var a in number) {
    total2 += a;
  }
  print(total2);

  //enum
  BloodType sungil = BloodType.A;
  BloodType soohyun = BloodType.B;
  BloodType soorim = BloodType.AB;

  Numbers(1004);
  merong(x: 202, y: 56532);
}

//숫자를 출력하는 함수
Numbers(int x, [int y = 100]) {
  //기본값
  print('$x');
}

merong({required int x, required int y}) {
  print('$x $y');
}

//1.
int addNumbers(int x, {required int y, int z = 30}) {
  int sum = x + y + z;
  return sum;
}

//2. -> 둘이 같은 코드
int addNumbers2(int x, {required int y, int z = 30}) => x + y + z;
