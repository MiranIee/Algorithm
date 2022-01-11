function solution(numbers, target) {
  var answer = 0;

  dfs(0, 0);
  function dfs(i, value) {
    if (i < numbers.length) {
      dfs(i + 1, value + numbers[i]);
      dfs(i + 1, value - numbers[i]);
    } else {
      //끝까지 간 경우
      if (value == target) {
        answer++;
      }
    }
  }
  return answer;
}
