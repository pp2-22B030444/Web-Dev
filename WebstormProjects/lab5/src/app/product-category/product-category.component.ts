import { Component, OnInit } from '@angular/core';
import { Category, categories } from '../categories';

@Component({
  selector: 'app-product-category',
  templateUrl: './product-category.component.html',
  styleUrls: ['./product-category.component.css']
})
export class ProductCategoryComponent implements OnInit {
  categories: Category[] = categories;

  constructor() { }

  ngOnInit(): void {
  }

}
