use std::fs::File;
use std::io::{Write, BufReader, BufRead};
use std::io::BufWriter;

fn main() -> std::io::Result<()> {

    let filename_input = "../datafile.txt";
    let filename_output = "../rust_outfile.txt";

    let input_file = File::open(filename_input).unwrap();
    let reader = BufReader::new(input_file);

    let mut output_file = BufWriter::new(File::create(filename_output).unwrap() );

    writeln!(output_file, "Student: Your Name")?;

    for (line_number, line) in reader.lines().enumerate() {
        let line = line.unwrap();

        if line.len() > 0 {
            let mut count_a = 0;
            let mut count_b = 0;
            let mut count_c = 0;
            let mut count_d = 0;
            let mut count_e = 0;
            let mut count_f = 0;
            let mut count_g = 0;
            let mut count_h = 0;
            let mut count_i = 0;
            let mut count_j = 0;
            let mut count_k = 0;

            for the_char in line.chars() {
                match the_char.to_ascii_lowercase() {
                    'a' => count_a += 1,
                    'b' => count_b += 1,
                    'c' => count_c += 1,
                    'd' => count_d += 1,
                    'e' => count_e += 1,
                    'f' => count_f += 1,
                    'g' => count_g += 1,
                    'h' => count_h += 1,
                    'i' => count_i += 1,
                    'j' => count_j += 1,
                    'k' => count_k += 1,
                    _ => println!( "Unknown count: {}", the_char)
                }
            }

            writeln!( output_file, "--------------------------------------------------------------------------")?;
            writeln!( output_file, "Line {}: ", line_number)?;
            writeln!( output_file, "A\tB\tC\tD\tE\tF\tG\tH\tI\tJ\tK")?;

            writeln!(
                 output_file,
                 "{}\t{}\t{}\t{}\t{}\t{}\t{}\t{}\t{}\t{}\t{}",
                 count_a,
                 count_b,
                 count_c,
                 count_d,
                 count_e,
                 count_f,
                 count_g,
                 count_h,
                 count_i,
                 count_j,
                 count_k,
            )?;

            writeln!(output_file, "--------------------------------------------------------------------------\n")?;
        }
    }

    Ok(())
}
