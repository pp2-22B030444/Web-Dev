import { Injectable } from '@angular/core';
import { HttpClient } from '@angular/common/http';
import { Observable } from 'rxjs';
import { IAlbum } from '../models/album';

@Injectable({ providedIn: 'root' })
export class AlbumsService {
  private URL_ALBUMS = 'https://jsonplaceholder.typicode.com/albums';
  private URL_PHOTOS = 'https://jsonplaceholder.typicode.com/photos';

  constructor(private http: HttpClient) {}

  getAlbums(): Observable<IAlbum[]> {
    return this.http.get<IAlbum[]>(this.URL_ALBUMS);
  }

  getAlbumById(albumId: number): Observable<IAlbum> {
    return this.http.get<IAlbum>(`${this.URL_ALBUMS}/${albumId}`);
  }

  getPhotos(albumId: number): Observable<any[]> {
    return this.http.get<any[]>(`${this.URL_PHOTOS}?albumId=${albumId}`);
  }

  deleteAlbum(id: number): Observable<any> {
    return this.http.delete(`${this.URL_ALBUMS}/${id}`);
  }

  updateAlbum(album: IAlbum): Observable<IAlbum> {
    return this.http.put<IAlbum>(`${this.URL_ALBUMS}/${album.id}`, album);
  }
}
