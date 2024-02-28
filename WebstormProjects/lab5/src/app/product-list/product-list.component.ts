import { Component, OnInit } from '@angular/core';
import { ActivatedRoute } from '@angular/router';
import { Product, products } from '../products';

@Component({
  selector: 'app-product-list',
  templateUrl: './product-list.component.html',
  styleUrls: ['./product-list.component.css']
})
export class ProductListComponent implements OnInit {

  products: Product[] = [];
  categoryId: number | undefined;

  constructor(private route: ActivatedRoute) { }

  ngOnInit() {
    this.route.paramMap.subscribe(params => {
      // @ts-ignore
      this.categoryId = +params.get('categoryId');
      this.products = products.filter(product => product.categoryId === this.categoryId);
    });
  }

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
  deleteProduct(product: any): void {
    const index = this.products.indexOf(product);
    if (index !== -1) {
      this.products.splice(index, 1);
    }
  }
  liking(product: any): void {
    if (!product.liked) {
      product.like++;
    } else {
      product.like--;
    }
    product.liked = !product.liked;
  }
}
