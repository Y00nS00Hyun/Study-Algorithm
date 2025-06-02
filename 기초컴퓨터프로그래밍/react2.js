let users = [
    { name: "윤수현", age: 23 },
    { name: "고규필", age: 22 }
];

let names = users.map(user => user.name);

console.log(names); // ["윤수현", "고규필"]