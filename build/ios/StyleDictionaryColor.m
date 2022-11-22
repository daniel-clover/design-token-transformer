
//
// StyleDictionaryColor.m
//

// Do not edit directly
// Generated on Tue, 22 Nov 2022 18:22:06 GMT


#import "StyleDictionaryColor.h"

@implementation StyleDictionaryColor

+ (UIColor *)color:(StyleDictionaryColorName)colorEnum{
  return [[self values] objectAtIndex:colorEnum];
}

+ (NSArray *)values {
  static NSArray* colorArray;
  static dispatch_once_t onceToken;

  dispatch_once(&onceToken, ^{
    colorArray = @[
[UIColor colorWithRed:0.949f green:0.988f blue:0.933f alpha:1.000f],
[UIColor colorWithRed:0.263f green:0.690f blue:0.165f alpha:1.000f],
[UIColor colorWithRed:0.133f green:0.533f blue:0.000f alpha:1.000f],
[UIColor colorWithRed:0.153f green:0.416f blue:0.086f alpha:1.000f],
[UIColor colorWithRed:0.902f green:0.953f blue:1.000f alpha:1.000f],
[UIColor colorWithRed:0.200f green:0.616f blue:1.000f alpha:1.000f],
[UIColor colorWithRed:0.196f green:0.443f blue:0.671f alpha:1.000f],
[UIColor colorWithRed:0.157f green:0.353f blue:0.533f alpha:1.000f],
[UIColor colorWithRed:0.145f green:0.200f blue:0.220f alpha:1.000f],
[UIColor colorWithRed:0.027f green:0.392f blue:0.671f alpha:1.000f],
[UIColor colorWithRed:0.933f green:0.984f blue:0.988f alpha:1.000f],
[UIColor colorWithRed:0.412f green:0.816f blue:0.867f alpha:1.000f],
[UIColor colorWithRed:0.078f green:0.506f blue:0.553f alpha:1.000f],
[UIColor colorWithRed:0.157f green:0.384f blue:0.443f alpha:1.000f],
[UIColor colorWithRed:0.980f green:0.953f blue:0.992f alpha:1.000f],
[UIColor colorWithRed:0.600f green:0.400f blue:0.800f alpha:1.000f],
[UIColor colorWithRed:0.357f green:0.243f blue:0.467f alpha:1.000f],
[UIColor colorWithRed:1.000f green:0.929f blue:0.929f alpha:1.000f],
[UIColor colorWithRed:0.906f green:0.000f blue:0.000f alpha:1.000f],
[UIColor colorWithRed:0.776f green:0.000f blue:0.000f alpha:1.000f],
[UIColor colorWithRed:1.000f green:0.369f blue:0.369f alpha:1.000f],
[UIColor colorWithRed:1.000f green:0.965f blue:0.800f alpha:1.000f],
[UIColor colorWithRed:1.000f green:0.820f blue:0.000f alpha:1.000f],
[UIColor colorWithRed:0.984f green:0.984f blue:0.984f alpha:1.000f],
[UIColor colorWithRed:0.898f green:0.898f blue:0.898f alpha:1.000f],
[UIColor colorWithRed:0.780f green:0.780f blue:0.780f alpha:1.000f],
[UIColor colorWithRed:0.447f green:0.447f blue:0.447f alpha:1.000f],
[UIColor colorWithRed:0.361f green:0.361f blue:0.361f alpha:1.000f],
[UIColor colorWithRed:0.000f green:0.000f blue:0.000f alpha:1.000f],
[UIColor colorWithRed:1.000f green:1.000f blue:1.000f alpha:1.000f],
[UIColor colorWithRed:0.129f green:0.173f blue:0.192f alpha:1.000f],
[UIColor colorWithRed:0.027f green:0.392f blue:0.671f alpha:1.000f],
#f2fceeff,
#43b02aff,
#228800ff,
#276a16ff,
#e6f3ffff,
#339dffff,
#3271abff,
#285a88ff,
#253338ff,
#0764abff,
#eefbfcff,
#69d0ddff,
#14818dff,
#286271ff,
#faf3fdff,
#9966ccff,
#5b3e77ff,
#ffededff,
#e70000ff,
#c60000ff,
#ff5e5eff,
#fff6ccff,
#ffd100ff,
#fbfbfbff,
#e5e5e5ff,
#c7c7c7ff,
#727272ff,
#5c5c5cff,
#000000ff,
#ffffffff,
#212c31ff,
#0764abff
    ];
  });

  return colorArray;
}

@end
