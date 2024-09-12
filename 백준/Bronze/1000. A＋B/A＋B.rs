use std::io;

fn main() {
    let mut input = String::new();
    
    io::stdin().read_line(&mut input).unwrap();

    let values:Vec<i32> = input
        .split_whitespace()
        .map(|input| input.parse().unwrap())
        .collect();

    println!("{}", values[0] + values[1]);

}
