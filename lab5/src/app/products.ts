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
  categoryId: number;
  like:number;
  liked: boolean;
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
    link:'https://kaspi.kz/shop/p/apple-iphone-15-256gb-chernyi-113137897/?c=750000000',
    categoryId:1,
    like:12,
    liked: false,
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
    link:'https://kaspi.kz/shop/p/apple-iphone-15-pro-max-256gb-seryi-113138420/?c=750000000',
    categoryId:1,
    like:12,
    liked: false,
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
    link:'https://kaspi.kz/shop/p/apple-iphone-15-pro-256gb-sinii-113138331/?c=750000000',
    categoryId:1,
    like:12,
    liked: false,

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
    link:'https://kaspi.kz/shop/p/apple-iphone-14-256gb-sirenevyi-106363141/?c=750000000',
    categoryId:1,
    like:25,
    liked: false,
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
    link:'https://kaspi.kz/shop/p/apple-iphone-14-pro-max-256gb-zolotistyi-106363335/?c=750000000',
    categoryId:1,
    like:12,
    liked: false,
  },
  // {
  //   id: 6,
  //   name: 'Iphone 14 Pro 256GB',
  //   price: 1466,
  //   description: 'Specifications of the Apple iPhone 14 Pro. Dimensions: 71.5 x 147.5 x 7.85 mm, Weight: 206 g, SoC: Apple A16 Bionic, ' +
  //     'CPU: 2x, 4x, 3 MHz, GPU: Apple GPU, RAM: 6 GB, 2133 MHz, Storage: 128 GB, 256 GB, 512 GB, 1024 GB, Display: 6.1 in, OLED, 1179 x 2556 pixels, ' +
  //     '24 bit, Battery: Li-Ion, OS: iOS 16.',
  //   image: 'https://resources.cdn-kaspi.kz/img/m/p/h22/h6e/64403478609950.jpg?format=preview-large',
  //   rating: {
  //     rate: 4,
  //   },
  //   link:'https://kaspi.kz/shop/p/apple-iphone-14-pro-256gb-serebristyi-106363307/?c=750000000',
  //   categoryId:1
  // },
  // {
  //   id: 7,
  //   name: 'Iphone 14 Pro Max 512GB',
  //   price: 2025,
  //   description: 'The iPhone 14 Pro Max display has rounded corners that follow a beautiful curved design,' +
  //     ' and these corners are within a standard rectangle. When measured as a standard rectangular shape, ' +
  //     'the screen is 6.69 inches diagonally (actual viewable area is less). Splash, Water, and Dust Resistant3.',
  //   image:'https://resources.cdn-kaspi.kz/img/m/p/h50/hd2/63792880451614.jpg?format=preview-large',
  //   rating: {
  //     rate: 3,
  //   },
  //   link:'https://kaspi.kz/shop/p/apple-iphone-14-pro-512gb-fioletovyi-106363322/?c=750000000',
  //   categoryId:1
  // },
  // {
  //   id: 8,
  //   name: 'Iphone 14 Pro 512GB',
  //   price: 1779 ,
  //   description: 'Specifications of the Apple iPhone 14 Pro. Dimensions: 71.5 x 147.5 x 7.85 mm, Weight: 206 g, SoC: Apple A16 Bionic, ' +
  //     'CPU: 2x, 4x, 3 MHz, GPU: Apple GPU, RAM: 6 GB, 2133 MHz, Storage: 128 GB, 256 GB, 512 GB, 1024 GB, Display: 6.1 in, OLED, 1179 x 2556 pixels, ' +
  //     '24 bit, Battery: Li-Ion, OS: iOS 16.',
  //   image: 'https://resources.cdn-kaspi.kz/img/m/p/h63/h0a/64428188729374.jpg?format=preview-large',
  //   rating: {
  //     rate: 3,
  //   },
  //   link:'https://kaspi.kz/shop/p/apple-iphone-14-pro-512gb-chernyi-106363267/?c=750000000',
  //   categoryId:1
  // },
  // {
  //   id: 9,
  //   name: 'Iphone 15 Pro Max 512GB',
  //   price: 1888,
  //   description: 'IPhone 15 Pro Max. Pro camera system. 48MP Main: 24 mm, ƒ/1.78 aperture, ' +
  //     'second‑generation sensor‑shift optical image stabilization, 100% Focus Pixels, support for ' +
  //     'super‑high‑resolution photos (24MP and 48MP).',
  //   image: 'https://resources.cdn-kaspi.kz/img/m/p/hdf/hc7/83559837007902.jpg?format=preview-large',
  //   rating: {
  //     rate: 4,
  //   },
  //   link:'https://kaspi.kz/shop/p/apple-iphone-15-pro-512gb-chernyi-113138194/?c=750000000',
  //   categoryId:1
  // },
  // {
  //   id: 10,
  //   name: 'Iphone 15 Pro 512GB ',
  //   price: 1780,
  //   description: 'The iPhone 15 Pro and iPhone 15 Pro Max are smartphones designed, developed, ' +
  //     'and marketed by Apple Inc.',
  //   image: 'https://resources.cdn-kaspi.kz/img/m/p/hc3/h83/83559834386462.jpg?format=preview-large',
  //   rating: {
  //     rate: 4,
  //   },
  //   link:'https://kaspi.kz/shop/p/apple-iphone-15-pro-512gb-belyi-113138293/?c=750000000',
  //   categoryId:1
  // },
  {
    id: 11,
    name: 'Jack London - Martin Eden',
    price: 8.9,
    description: 'Jack London’s novel. Martin Eden(1909) centers on the character Martin Eden, a poor young sailor who has grown up in a working-class family without receiving any education.' +
      ' Martin dreams of being a writer and rising in the ranks of social class to show the world what he can do. As the novel begins, Martin, who lives in Oakland, is struggling to rise out of ' +
      'his current circumstances as a destitute proletarian to make something of himself.',
    image: 'https://shop-cdn1-2.vigbo.tech/shops/116819/products/19800695/images/3-d83f5178574c47c66be8528be63d4367.jpg',
    rating: {
      rate: 5,
    },
    link:'https://kaspi.kz/shop/p/london-dzh-martin-iden-26001592/?c=750000000',
    categoryId:2,
    like:5,
    liked: false,
  },
  {
    id: 12,
    name: 'Mikhail Bulgakov - The Master and Margarita',
    price: 10,
    description: 'Mikhail Bulgakov’s book ‘ The Master and Margarita ‘ is set in Moscow in the 1930s. The tale, which blends fantasy, comedy, and social commentary, centers on the exploits of the Devil,' +
      ' who enters Moscow in the guise of Professor Woland, and his band of cunning goons. Woland stirs up mayhem in the metropolis, revealing the moral decay and dishonesty of Soviet society.',
    image: 'https://cdn1.ozone.ru/s3/multimedia-3/6329709027.jpg',
    rating: {
      rate: 4,
    },
    link:'https://kaspi.kz/shop/p/bulgakov-m-a-master-i-margarita-105221836/?c=750000000',
    categoryId:2,
    like:12,
    liked: false,
  },
  {
    id: 13,
    name: '1984 - George Orwell',
    price: 9,
    description: '" 1984, or " Nineteen Eighty-Four, " is a 1949 novel by George Orwell. It is a dystopian novel, meaning ' +
      'it takes place in a dehumanized, futuristic society. It tells the story of a man who lives in a totalitarian world with ' +
      'a harsh government and how he plans to rebel against his corrupt government and society. 1984 has also invented several famous ' +
      'Orwellian words such as Newspeak, Big Brother and thoughtpolice.',
    image: 'https://cdn1.ozone.ru/s3/multimedia-g/6350826352.jpg',
    rating: {
      rate: 5,
    },
    link:'https://kaspi.kz/shop/p/oruell-dzh-1984-105221802/?c=750000000',
    categoryId:2,
    like:19,
    liked: false,
  },
  {
    id: 14,
    name: 'Jane Eyre - Charlotte Brontë',
    price: 8.9,
    description: 'The story is set in England in the late 18th to early 19th century. The story focuses on “Jane,” a young girl who, after ' +
      'losing both her parents to typhoid, is then sent away to live with her cruel aunt at “Gateshead Hall” at her dying Uncle’s last request.' +
      ' Once there, she is emotionally and physically abused by members of her family. Not long after living with her cruel family, Jane is sent' +
      ' to Lowood School, a boarding school for girls. ',
    image: 'https://cdn1.ozone.ru/s3/multimedia-5/6487534181.jpg',
    rating: {
      rate: 4,
    },
    link:'https://kaspi.kz/shop/p/bronte-sh-dzhein-eir-26008159/?c=750000000',
    categoryId:2,
    like:50,
    liked: false,
  },
  {
    id: 15,
    name: 'Fahrenheit 451 -  Ray Bradbury ',
    price: 1780,
    description: 'Ray Bradbury’s 1953 novel Fahrenheit 451 is set in a dystopian society that burns books in order to ' +
      'control dangerous ideas and unhappy concepts. The novel tells the story of Guy Montag, a fireman who questions the ' +
      'book-burning policy and undergoes extraordinary suffering and transformation as a result.',
    image: 'https://yanashla.com/wp-content/uploads/2020/07/12.jpeg',
    rating: {
      rate: 4,
    },
    link:'https://kaspi.kz/shop/p/bredberi-r-451-po-farengeitu-100869964/?c=750000000',
    categoryId:2,
    like:120,
    liked: false,
  },
  {
    id: 16,
    name: 'JМышь LS Pro черный',
    price: 2,
    description: 'Sensor type: Optical LED\n ' +
      'Connection type: Wireless\n' +
      'Interface: Bluetooth,Radio\n' +
      'channel Design: for right and left hand\n' +
      'Gaming: No\n' +
      'Optical sensor resolution: 1600.0 DPI\n',
    image: 'https://resources.cdn-kaspi.kz/img/m/p/h2f/h61/82393746636830.png?format=gallery-medium',
    rating: {
      rate: 5,
    },
    link:'https://kaspi.kz/shop/p/ls-pro-chernyi-107622516/?c=750000000',
    categoryId:3,
    like:12,
    liked: false,
  },
  {
    id: 17,
    name: 'Ноутбук Apple MacBook Air 13 MGN93 ',
    price: 965,
    description: 'screen diagonal: 13.3 inch\n' +
      'Processor: Apple M1\n' +
      'Graphics card: Apple M1\n' +
      'RAM size: 8.0 GB\n' +
      'Hard drive type: SSD\n' +
      'Total storage capacity: 256.0 GB',
    image: 'https://resources.cdn-kaspi.kz/img/m/p/h9a/h35/64082972704798.jpg?format=gallery-medium',
    rating: {
      rate: 4,
    },
    link:'https://kaspi.kz/shop/p/apple-macbook-air-13-mgn93-serebristyi-100798912/?c=750000000',
    categoryId:3,
    like:125,
    liked: false,
  },
  {
    id: 18,
    name: 'Планшет Apple iPad 2021 Wi-Fi 10.2 дюйм 4 Гб/64б ',
    price: 337,
    description: 'diagonal: 10.2 inch\n' +
      'screen resolution: 2160x1620\n' +
      'Screen manufacturing technology: TFT IPS\n' +
      'RAM: 4\n' +
      'GB Internal memory: 64.0 GB\n' +
      'Wireless interfaces: Wi-Fi,Bluetooth\n' +
      'Battery capacity: 3240.0mAh\n' +
      'Color: Silver',
    image: 'https://resources.cdn-kaspi.kz/img/m/p/h7e/h90/64072646492190.jpg?format=gallery-medium',
    rating: {
      rate: 5,
    },
    link:'https://kaspi.kz/shop/p/apple-ipad-2021-wi-fi-10-2-djuim-4-gb-64-gb-serebristyi-102301731/?c=750000000',
    categoryId:3,
    like:1298,
    liked: false,
  },
  {
    id: 19,
    name: 'МФУ Epson EcoTank L3250',
    price: 350,
    description: 'device: MFP\n' +
      'Printing type: color\n' +
      'printing technology: piezoelectric inkjet\n' +
      'maximum format: A4\n' +
      'Maximum resolution for B/W printing: 5760x1440 dpi\n' +
      'Maximum resolution for color printing: 5760x1440 dpi ',
    image: 'https://resources.cdn-kaspi.kz/img/m/p/ha6/hf3/66594300821534.jpg?format=gallery-medium',
    rating: {
      rate: 4,
    },
    link:'https://kaspi.kz/shop/p/mfu-epson-ecotank-l3250-107929066/?c=750000000',
    categoryId:3,
    like:128,
    liked: false,
  },
  {
    id: 20,
    name: 'Wi-Fi роутер TP-LINK Archer C80 ',
    price: 50,
    description: 'Type: Wi-Fi Router\n' +
      'Maximum wireless connection speed: 1900.0 Mbps\n' +
      'Wi-Fi standards: Wi-Fi 4 (802.11n) ,Wi-Fi 5 (802.11ac)\n' +
      'Number of LAN ports: 4\n' +
      'frequency ranges: 2.4GHz, ,5 GHz',
    image: 'https://resources.cdn-kaspi.kz/img/m/p/h13/h0f/63885265829918.jpg?format=gallery-medium',
    rating: {
      rate: 4,
    },
    link:'https://kaspi.kz/shop/p/wi-fi-router-tp-link-archer-c80-100663389/?c=750000000',
    categoryId:3,
    like:1247,
    liked: false,
  },
  {
    id: 21,
    name: 'Zuru Goose-Hugging , height 160 cm, white',
    price: 11,
    description: 'Type: soft toy\n' +
      'height: 160.0 cm\n' +
      'Filler: sintepon\n' +
      'Child\'s gender: universal\n' +
      'color: white\n' +
      'Main material: plush',
    image: 'https://resources.cdn-kaspi.kz/img/m/p/h8b/h67/67153086119966.jpg?format=gallery-medium',
    rating: {
      rate: 5,
    },
    link:'https://kaspi.kz/shop/p/zuru-gus--obnimus-vysota-160-sm-belyi-108156948/?c=750000000',
    categoryId:4,
    like:1298,
    liked: false,
  },
  {
    id: 22,
    name: 'Reborn doll Baby born 511719. 55 cm accessories included, arms and legs movable ',
    price: 12,
    description: 'Type: Reborn doll\n' +
      'Height: 55.0cm\n' +
      'Features: Accessories included, ,arms and legs movable\n' +
      'Doll gender: girl\n' +
      'Child gender: girl\n' +
      'Color: multicolor\n' +
      'Main material: Silicone',
    image: 'https://resources.cdn-kaspi.kz/img/m/p/h6b/h1c/84713992028190.jpg?format=gallery-medium',
    rating: {
      rate: 4,
    },
    link:'https://kaspi.kz/shop/p/kukla-reborn-baby-born-511719-55-sm-aksessuary-v-komplekte-ruki-i-nogi-podvizhnye-108174335/?c=750000000',
    categoryId:4,
    like:124,
    liked: false,
  },
  {
    id: 23,
    name: 'Nestogen Premium 1 с рождения 1050 г ',
    price: 13.5,
    description: 'type: dry milk mixture\n' +
      'purpose: for immunity, , for digestion, ,for healthy growth and development\n' +
      'step: 1\n' +
      'weight: 1050.0 g\n' +
      'minimum age: from birth',
    image: 'https://resources.cdn-kaspi.kz/img/m/p/h4b/hce/82321825529886.png?format=gallery-medium',
    rating: {
      rate: 5,
    },
    link:'https://kaspi.kz/shop/p/nestogen-premium-1-s-rozhdenija-1050-g-101032642/?c=750000000',
    categoryId:4,
    like:1287,
    liked: false,
  },
  {
    id: 24,
    name: 'Палатка Little Princess KY-202101',
    price: 11.1,
    description: 'Type: tent\n' +
      'Placement: indoors,outdoors\n' +
      'Main material: fabric',
    image: 'https://resources.cdn-kaspi.kz/img/m/p/h93/hc1/63621692162078.jpg?format=gallery-medium',
    rating: {
      rate: 4,
    },
    link:'https://kaspi.kz/shop/p/palatka-little-princess-ky-202101-107074335/?c=750000000',
    categoryId:4,
    like:1287,
    liked: false,
  },
  {
    id: 25,
    name: 'Коляска трансформер Belecoo 321, серый, золотой',
    price: 93.5,
    description: 'type: transformer stroller\n' +
      'number of main blocks: 1 - for one child\n' +
      'folding mechanism: book\n' +
      'removable wheels: Yes\n' +
      'possibility of adjustment: without adjustments\n' +
      'backrest position: sitting, ,reclining, ,lying\n' +
      'down possibility of transformation: into a car seat, , into a cradle, ,into a walking block',
    image: 'https://resources.cdn-kaspi.kz/img/m/p/h31/h1b/69064789164062.jpg?format=gallery-medium',
    rating: {
      rate: 4,
    },
    link:'https://resources.cdn-kaspi.kz/img/m/p/h31/h1b/69064789164062.jpg?format=gallery-medium',
    categoryId:4,
    like:1255,
    liked: false,
  },
];

