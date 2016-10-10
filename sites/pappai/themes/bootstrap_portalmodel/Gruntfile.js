module.exports = function(grunt) {
  grunt.initConfig({
    pkg: grunt.file.readJSON('package.json'),
        less: {
      styles :{
            options: {
        compress: true,
            },
            files: {
                "css/style.css": "less/style.less"
            }
      }
        },
        watch: {
            styles: {
               options: {
                    event: ["added", "deleted", "changed"]
                },
                files: ["less/*.less"],
                tasks: [ "less" ]
            }
        }
    });

    grunt.loadNpmTasks("grunt-contrib-less");
    grunt.loadNpmTasks("grunt-contrib-watch");
    grunt.registerTask("default", ["watch"]);
};

