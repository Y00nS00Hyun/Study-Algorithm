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
}
