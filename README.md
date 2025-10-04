# Mars Habitat Designer

Welcome to the **Mars Habitat Designer** — a C++ program that helps you design a polygon-shaped house for life on Mars! 🌌  
You can choose the number of sides, specify the side length, and see the calculated floor area — along with a fun ASCII preview of your Mars home.

---

## Features

- Input the number of sides for your house (minimum of 3).  
- Input the size of each side (must be a positive value).  
- Calculates the **area** of a regular polygon using this formula:

  \[
  \text{Area} = \frac{n \times s^2}{4 \times \tan\left(\frac{\pi}{n}\right)}
  \]

  where:  
  - *n* = number of sides  
  - *s* = length of each side  

- Displays results with formatted precision.  
- Includes a small ASCII-art "house" as a fun touch.

---

## Example Output

```
 Welcome to the Mars Habitat Designer!
How many sides should your house have? (min 3): 5
Enter the size of each side in meters (must be positive): 4

Your Mars house has 5 sides.
Each side is 4.00 meters long.
The total floor area is about 27.53 square meters.

Here’s a simple text version of your Mars house:

        ^
       / \
      /___\
     |     |
     |     |
     |_____|

(Imagine this as a 5-sided Mars house!)

 Ready for life on Mars!
```

---

## How to Compile and Run

### Using a Terminal or Command Prompt

1. Save the code as `mars_house.cpp`
2. Compile the program using g++:
   ```bash
   g++ mars_house.cpp -o mars_house
   ```
3. Run the program:
   ```bash
   ./mars_house
   ```

---

## Requirements

- C++ compiler (such as `g++` or `clang++`)
- Works on macOS, Windows, or Linux

---

## Future Enhancements

- Draw different shapes depending on the number of sides.
- Add colors or simple graphics with a library like SFML.
- Display 3D visualizations of the Mars habitat.
- Include features like materials, oxygen systems, and insulation!

---

## Author

Created by **Leo Luttmann** for a **Space Hackathon** project 
