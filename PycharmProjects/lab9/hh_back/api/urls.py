from django.urls import path
from .views import (CompanyListView, CompanyDetailView,
                    VacancyListView, VacancyDetailView, CompanyVacancyView, VacancyTopTenView)

urlpatterns = [
    path('vacancy/', VacancyListView.as_view(), name='vacancy-list'),
    path('vacancy/<int:id>/', VacancyDetailView.as_view(), name='vacancy-detail'),
    path('vacancy/top_ten/', VacancyTopTenView.as_view(), name='vacancy-top-ten'),
    path('companies/', CompanyListView.as_view(), name='company-list'),
    path('companies/<int:id>/', CompanyDetailView.as_view(), name='company-detail'),
    path('companies/<int:id>/vacancy/', CompanyVacancyView.as_view(), name='category-products'),
]