const students = [
    { name: "카리나", score: 85 },
    { name: "규필", score: 92 },
    { name: "수현", score: 17 }
];

students.forEach(student => {
    console.log(`${student.name}의 점수는 ${student.score}점입니다.`);
});
