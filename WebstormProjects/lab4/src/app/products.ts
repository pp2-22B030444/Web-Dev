export interface Product {
  id: number;
  name: string;
  price: number;
  description: string;
  image:string;
  rating: {
    rate: number;
  };
  link:string;
}

export const products = [
  {
    id: 1,
    name: 'Iphone 15 256GB',
    price: 1177,
    description: '\n' +
      'iPhone 15 - Technical Specifications. Year introduced : 2023 Finish. Black Blue Green Yellow Pink.' +
      ' Aluminum design, Ceramic Shield front, Color-infused glass back Capacity 1. 128GB 256GB 512GB Size' +
      ' and Weight 2. Width: 2.82 inches (71.6 mm) Height: 5.81 inches (147.6 mm) Depth: 0.31 inch (7.80 mm) ' +
      'Weight: 6.02 ounces (171 grams) Display.',
    image:'https://resources.cdn-kaspi.kz/img/m/p/he2/h1d/83559338442782.png?format=preview-large',
    rating: {
      rate: 5,

    },
    link:'https://kaspi.kz/shop/p/apple-iphone-15-256gb-chernyi-113137897/?c=750000000'
  },
  {
    id: 2,
    name: 'Iphone 15 Pro Max 256GB',
    price: 1620,
    description: 'IPhone 15 Pro Max. Pro camera system. 48MP Main: 24 mm, ƒ/1.78 aperture, ' +
      'second‑generation sensor‑shift optical image stabilization, 100% Focus Pixels, support for ' +
      'super‑high‑resolution photos (24MP and 48MP).',
    image: 'https://resources.cdn-kaspi.kz/img/m/p/hc1/h65/83559848181790.png?format=preview-large',
    rating: {
      rate: 5,

    },
    link:'https://kaspi.kz/shop/p/apple-iphone-15-pro-max-256gb-seryi-113138420/?c=750000000'
  },
  {
    id: 3,
    name: 'Iphone 15 Pro 256GB',
    price: 1467,
    description: 'The iPhone 15 Pro and iPhone 15 Pro Max are smartphones designed, developed, ' +
      'and marketed by Apple Inc.',
    image: 'https://resources.cdn-kaspi.kz/img/m/p/h88/hde/83559835697182.jpg?format=preview-large',
    rating: {
      rate: 5,

    },
    link:'https://kaspi.kz/shop/p/apple-iphone-15-pro-256gb-sinii-113138331/?c=750000000'
  },
  {
    id: 4,
    name: 'Iphone 14 256GB ',
    price: 1045,
    description: 'IPhone 14 released in 16 September 2022.It has 6GB Ram and internal memory is 512GB or ' +
      '256GB or 128GB.It has 6.1 inch OLED display.iPhone 14 has 12mp back camera and 12mp front camera.',
    image: 'https://resources.cdn-kaspi.kz/img/m/p/h33/hf7/64401467899934.jpg?format=preview-large',
    rating: {
      rate: 5,

    },
    link:'https://kaspi.kz/shop/p/apple-iphone-14-256gb-sirenevyi-106363141/?c=750000000'
  },
  {
    id: 5,
    name: 'Iphone 14 Pro Max 256GB',
    price: 1500,
    description: 'The iPhone 14 Pro Max display has rounded corners that follow a beautiful curved design,' +
      ' and these corners are within a standard rectangle. When measured as a standard rectangular shape, ' +
      'the screen is 6.69 inches diagonally (actual viewable area is less). Splash, Water, and Dust Resistant3.',
    image: 'https://resources.cdn-kaspi.kz/img/m/p/h3e/hdb/64508510896158.jpg?format=preview-large',
    rating: {
      rate: 5,

    },
    link:'https://kaspi.kz/shop/p/apple-iphone-14-pro-max-256gb-zolotistyi-106363335/?c=750000000'
  },
  {
    id: 6,
    name: 'Iphone 14 Pro 256GB',
    price: 1466,
    description: 'Specifications of the Apple iPhone 14 Pro. Dimensions: 71.5 x 147.5 x 7.85 mm, Weight: 206 g, SoC: Apple A16 Bionic, ' +
      'CPU: 2x, 4x, 3 MHz, GPU: Apple GPU, RAM: 6 GB, 2133 MHz, Storage: 128 GB, 256 GB, 512 GB, 1024 GB, Display: 6.1 in, OLED, 1179 x 2556 pixels, ' +
      '24 bit, Battery: Li-Ion, OS: iOS 16.',
    image: 'https://resources.cdn-kaspi.kz/img/m/p/h22/h6e/64403478609950.jpg?format=preview-large',
    rating: {
      rate: 4.5,

    },
    link:'https://kaspi.kz/shop/p/apple-iphone-14-pro-256gb-serebristyi-106363307/?c=750000000'
  },
  {
    id: 7,
    name: 'Iphone 14 Pro Max 512GB',
    price: 2025,
    description: 'The iPhone 14 Pro Max display has rounded corners that follow a beautiful curved design,' +
      ' and these corners are within a standard rectangle. When measured as a standard rectangular shape, ' +
      'the screen is 6.69 inches diagonally (actual viewable area is less). Splash, Water, and Dust Resistant3.',
    image:'https://resources.cdn-kaspi.kz/img/m/p/h50/hd2/63792880451614.jpg?format=preview-large',
    rating: {
      rate: 3,

    },
    link:'https://kaspi.kz/shop/p/apple-iphone-14-pro-512gb-fioletovyi-106363322/?c=750000000'
  },
  {
    id: 8,
    name: 'Iphone 14 Pro 512GB',
    price: 1779 ,
    description: 'Specifications of the Apple iPhone 14 Pro. Dimensions: 71.5 x 147.5 x 7.85 mm, Weight: 206 g, SoC: Apple A16 Bionic, ' +
      'CPU: 2x, 4x, 3 MHz, GPU: Apple GPU, RAM: 6 GB, 2133 MHz, Storage: 128 GB, 256 GB, 512 GB, 1024 GB, Display: 6.1 in, OLED, 1179 x 2556 pixels, ' +
      '24 bit, Battery: Li-Ion, OS: iOS 16.',
    image: 'https://resources.cdn-kaspi.kz/img/m/p/h63/h0a/64428188729374.jpg?format=preview-large',
    rating: {
      rate: 3.5,

    },
    link:'https://kaspi.kz/shop/p/apple-iphone-14-pro-512gb-chernyi-106363267/?c=750000000'
  },
  {
    id: 9,
    name: 'Iphone 15 Pro Max 512GB',
    price: 1888,
    description: 'IPhone 15 Pro Max. Pro camera system. 48MP Main: 24 mm, ƒ/1.78 aperture, ' +
      'second‑generation sensor‑shift optical image stabilization, 100% Focus Pixels, support for ' +
      'super‑high‑resolution photos (24MP and 48MP).',
    image: 'https://resources.cdn-kaspi.kz/img/m/p/hdf/hc7/83559837007902.jpg?format=preview-large',
    rating: {
      rate: 4.5,

    },
    link:'https://kaspi.kz/shop/p/apple-iphone-15-pro-512gb-chernyi-113138194/?c=750000000'
  },
  {
    id: 10,
    name: 'Iphone 15 Pro 512GB ',
    price: 1780,
    description: 'The iPhone 15 Pro and iPhone 15 Pro Max are smartphones designed, developed, ' +
      'and marketed by Apple Inc.',
    image: 'https://resources.cdn-kaspi.kz/img/m/p/hc3/h83/83559834386462.jpg?format=preview-large',
    rating: {
      rate: 4,

    },
    link:'https://kaspi.kz/shop/p/apple-iphone-15-pro-512gb-belyi-113138293/?c=750000000'
  },
];


/*
Copyright Google LLC. All Rights Reserved.
Use of this source code is governed by an MIT-style license that
can be found in the LICENSE file at https://angular.io/license
*/
