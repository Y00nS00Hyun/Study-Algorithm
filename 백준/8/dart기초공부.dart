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
}
