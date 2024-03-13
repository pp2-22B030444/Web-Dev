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
  // shareTelegram(productLink: string) {
  //   const shareMessage = `Check out: ${productLink}`;
  //   const telegram = `https://t.me/share/url?url=${encodeURIComponent(shareMessage)}`;
  //   window.location.assign(telegram);
  //
  share(productLink: string) {
    const shareMessage = `Check out: ${productLink}`;
    const whatsappLink = `https://api.whatsapp.com/send?text=${encodeURIComponent(shareMessage)}`;
    window.location.href = whatsappLink;
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
