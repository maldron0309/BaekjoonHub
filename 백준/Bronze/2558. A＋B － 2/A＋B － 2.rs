use std::io;

fn main() {
    let mut input_a = String::new();
    io::stdin().read_line(&mut input_a).unwrap();
    let a :i32 = input_a.trim().parse().unwrap();

    let mut input_b = String::new();
    io::stdin().read_line(&mut input_b).unwrap();
    let b :i32 = input_b.trim().parse().unwrap();

    println!("{}", a + b);

}
