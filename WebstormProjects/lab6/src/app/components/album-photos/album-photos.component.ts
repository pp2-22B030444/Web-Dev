import { Component, OnInit } from '@angular/core';
import { ActivatedRoute, Router } from '@angular/router';
import { AlbumsService } from 'src/app/service/albums.service';
import { IPhoto } from 'src/app/models/photo';

@Component({
  selector: 'app-album-photos',
  templateUrl: './album-photos.component.html',
  styleUrls: ['./album-photos.component.css'],
})
export class AlbumPhotosComponent implements OnInit {
  photos: IPhoto[] = [];

  albumId!: number;

  constructor(
    private photosService: AlbumsService,
    private router: Router,
    private route: ActivatedRoute
  ) {}

  ngOnInit(): void {
    this.albumId = +this.route.snapshot.params['id'];
    this.photosService
      .getPhotos(this.albumId)
      .subscribe((data: IPhoto[]) => (this.photos = data));
  }

  goBack() {
    this.router.navigate(['/albums', this.albumId]);
  }
}
