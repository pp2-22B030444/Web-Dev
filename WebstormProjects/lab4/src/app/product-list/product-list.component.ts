import { Component } from '@angular/core';

import { products } from '../products';

@Component({
  selector: 'app-product-list',
  templateUrl: './product-list.component.html',
  styleUrls: ['./product-list.component.css']
})
export class ProductListComponent {

  products = [...products];

  shareTelegram(id: number) {
    const product = this.products.find(p => p.id === id);
    if (!product) return;

    const text = encodeURIComponent(`Поделиться товаром: ${product.name}\n\nОписание: ${product.description}`);
    const url = encodeURIComponent(window.location.href + '?product=' + product.id);

    window.open(`https://t.me/share/url?url=${url}&text=${text}`, '_blank');
  }
  onNotify() {
    window.alert('You will be notified when the product goes on sale');
  }
  // calculateStarWidth(rate: number): number {
  //   // Предположим, что ваша максимальная оценка составляет 5
  //   return (rate / 5) * 100;
  // }
}


/*
Copyright Google LLC. All Rights Reserved.
Use of this source code is governed by an MIT-style license that
can be found in the LICENSE file at https://angular.io/license
*/
