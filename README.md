```
git clone https://github.com/<username>/<repository>.git
```

```
cd <repository>
```

```
<package-manager> install git-filter-repo
```

```
git filter-repo --path <folder-name> --to-subdirectory-filter <folder-name> --force

```

```
git remote remove origin
```

```
git remote add new-origin https://github.com/<username>/<repository>.git
```

```
git push new-origin main
```