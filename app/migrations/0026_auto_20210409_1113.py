# Generated by Django 3.1.7 on 2021-04-09 09:13

from django.db import migrations, models


class Migration(migrations.Migration):

    dependencies = [
        ('app', '0025_auto_20210409_1028'),
    ]

    operations = [
        migrations.AlterField(
            model_name='fichier',
            name='commentaire',
            field=models.TimeField(),
        ),
    ]
